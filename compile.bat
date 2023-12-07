@echo off

setlocal

if "%1" == "" (
    echo "매개변수를 입력하세요."
    endlocal
    goto :eof
)

"C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe" "main.cpp" -o "test.exe"  -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\include" -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include" -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include" -I"C:\Program Files (x86)\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include\c++" -L"C:\Program Files (x86)\Dev-Cpp\MinGW64\lib" -L"C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\lib" -static-libgcc

if "%ERRORLEVEL%" == "1" (
    echo "Compile 오류입니다."
    endlocal
    goto :eof
)

set "search_string=%1"  

for /d %%d in ("강의+자료\CPS(채점폴더)\*") do (

    for /f "tokens=1 delims=." %%a in ("%%~nxd") do (
        if "%%a" == "%search_string%" (
            set "found_folder=%%d"
            goto :done
        )   
    )
)
:done
echo "채점폴더 경로 : %found_folder%"

if exist "%~dp0%found_folder%\AA.exe" (
    echo "실행 파일이 있습니다."

    set /p "input=복사를 하시겠습니까? (y/n) : "
    
) else (
    copy test.exe "%found_folder%/AA.exe"
    copy main.cpp "%found_folder%/main.cpp"    
    goto :next
)

if /i "%input%"=="y" (
        copy test.exe "%found_folder%/AA.exe" 
        copy main.cpp "%found_folder%/main.cpp"    
) else (
        echo "복사를 취소했습니다."
        endlocal
        goto :eof
)

:next
pushd "./%found_folder%"

start "Judge" "Judge(C++).exe"

popd
endlocal