#include "Camera.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"

ACamera::ACamera()
{
    PrimaryActorTick.bCanEverTick = true;

    // Создаем компонент движения
    FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));

    // Создаем SpringArm
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(RootComponent);
    SpringArm->TargetArmLength = 1500.0f;
    SpringArm->bDoCollisionTest = false;
    SpringArm->bEnableCameraRotationLag = true;
    SpringArm->CameraRotationLagSpeed = 10.0f;
    SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));

    // Создаем камеру
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComponent->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}

void ACamera::BeginPlay()
{
    Super::BeginPlay();

    // Добавляем mapping context для локального игрока
    if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
                ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }
}

void ACamera::Tick(float DeltaTime) { Super::Tick(DeltaTime); }

void ACamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Настройка Enhanced Input
    if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACamera::Move);
        EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Triggered, this, &ACamera::Rotate);
        EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Triggered, this, &ACamera::Zoom);
    }
}

void ACamera::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();

    if (MovementVector.X != 0.0f || MovementVector.Y != 0.0f)
    {
        // Получаем forward и right векторы камеры (из SpringArm)
        const FRotator CameraRotation = SpringArm->GetComponentRotation();
        const FRotator YawRotation(0, CameraRotation.Yaw, 0);

        // Получаем векторы направления
        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        // Рассчитываем вектор движения
        FVector MoveDirection = (ForwardDirection * MovementVector.Y) + (RightDirection * MovementVector.X);
        MoveDirection.Normalize();

        // Применяем движение
        AddMovementInput(MoveDirection, MoveSpeed * GetWorld()->GetDeltaSeconds());
    }
}

void ACamera::Rotate(const FInputActionValue& Value)
{
    float RotationValue = Value.Get<float>();

    if (RotationValue != 0.0f)
    {
        FRotator NewRotation = SpringArm->GetRelativeRotation();
        NewRotation.Yaw += RotationValue * RotationSpeed * GetWorld()->GetDeltaSeconds();
        SpringArm->SetRelativeRotation(NewRotation);
    }
}

void ACamera::Zoom(const FInputActionValue& Value)
{
    float ZoomValue = Value.Get<float>();

    if (ZoomValue != 0.0f)
    {
        float NewArmLength = SpringArm->TargetArmLength - ZoomValue * ZoomSpeed * GetWorld()->GetDeltaSeconds();
        NewArmLength = FMath::Clamp(NewArmLength, MinZoomDistance, MaxZoomDistance);
        SpringArm->TargetArmLength = NewArmLength;
    }
}