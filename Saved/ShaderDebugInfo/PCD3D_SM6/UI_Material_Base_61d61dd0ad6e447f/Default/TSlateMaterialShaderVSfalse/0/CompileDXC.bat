@ECHO OFF
SET DXC="C:\Program Files\Epic Games\UE_5.5\Engine\Binaries\ThirdParty\ShaderConductor\Win64\dxc.exe"
IF NOT EXIST %DXC% (
	ECHO Couldn't find dxc.exe under "C:\Program Files\Epic Games\UE_5.5\Engine\Binaries\ThirdParty\ShaderConductor\Win64"
	GOTO :END
)
%DXC% -HV 2018 -Zpr -O3 -auto-binding-space 0 -Wno-parentheses-equality -disable-lifetime-markers -T vs_6_6 -E Main -Fc SlateVertexShader.d3dasm -Fo SlateVertexShader.dxil SlateVertexShader.usf
:END
PAUSE
