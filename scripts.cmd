@echo off
REM FIND Way to check of object file already exists
C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\bin\obj

REM compling source files
g++ -g -c  "..\features\source files\Tuple.cpp"
g++ -g -c  "..\features\source files\Operations.cpp"


REM compiling test files
g++ -g -c ../test/tuple-test.cpp
g++ -g -c ../test/operations-test.cpp


REM linking object files and test files
g++ -o ../../test_exe/tuple-test tuple-test.o Tuple.o
g++ -o ../../test_exe/operation-test operations-test.o Operations.o Tuple.o

REM Run tests
@echo on
