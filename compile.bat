@echo off

setlocal

if "%1" == "" (
    echo "�Ű������� �Է��ϼ���."
    endlocal
    goto :eof
)

"C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe" "main.cpp" -o "test.exe"  -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\include" -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include" -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include" -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include\c++" -L"C:\Program Files (x86)\Dev-Cpp\MinGW64\lib" -L"C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\lib" -static-libgcc

if "%ERRORLEVEL%" == "1" (
    echo "Compile �����Դϴ�."
    endlocal
    goto :eof
)

set "search_string=%1"  

for /d %%d in ("����+�ڷ�\CPS(ä������)\*") do (

    for /f "tokens=1 delims=." %%a in ("%%~nxd") do (
        if "%%a" == "%search_string%" (
            set "found_folder=%%d"
            goto :done
        )   
    )
)
:done
echo "ä������ ��� : %found_folder%"

if exist "%~dp0%found_folder%\AA.exe" (
    echo "���� ������ �ֽ��ϴ�."

    set /p "input=���縦 �Ͻðڽ��ϱ�? (y/n) : "
    
) else (
    copy test.exe "%found_folder%/AA.exe"
    copy main.cpp "%found_folder%/main.cpp"    
    goto :next
)

if /i "%input%"=="y" (
        copy test.exe "%found_folder%/AA.exe" 
        copy main.cpp "%found_folder%/main.cpp"    
) else (
        echo "���縦 ����߽��ϴ�."
        endlocal
        goto :eof
)

:next
pushd "./%found_folder%"

start "Judge" "Judge(C++).exe"

popd
endlocal