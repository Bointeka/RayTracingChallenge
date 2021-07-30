@echo off
C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\bin\obj

REM compling source files
gcc -g -c  "..\features\source files\Tuple.cpp"

REM compiling test files
g++ -g -c ../test/tuple-test.cpp


REM linking object files and test files
g++ -o ../../tuple-test tuple-test.o Tuple.o

REM Run tests
@echo on
START ../../tuple-test.exe
