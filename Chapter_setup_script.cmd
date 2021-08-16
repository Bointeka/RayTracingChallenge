@echo off
REM Change directories to the putting it together chapter
C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\putting_it_together\Chapter 1

REM Make a bin directory if it does not exist
if NOT EXIST bin\NUL mkdir bin

REM Move to the bin directory
cd bin

REM Compile the relevant files
g++ -g -c "..\Projectile.cpp"
g++ -g -c "..\main.cpp"

REM Change to the directory of the core files' object files
C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\bin\obj

REM Check if all the relevant object files exist
if NOT EXIST Tuple.o (
    C:
    cd \Users\jkaog\Desktop\Coding\RayTracing Challenge   
    CALL test_setup_scripts.cmd
)
if NOT EXIST Operations.o (
    C:
    cd \Users\jkaog\Desktop\Coding\RayTracing Challenge   
    CALL test_setup_scripts.cmd
)

REM Revert back to the Chapter's bin file
C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\putting_it_together\Chapter 1\bin

REM Link 
g++ -o main main.o Projectile.o ..\..\..\bin\obj\Operations.o ..\..\..\bin\obj\Tuple.o