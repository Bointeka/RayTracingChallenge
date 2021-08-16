@echo off
REM TODO prevent script from compiling unnecessarily
REM FIND Way to check of object file already exists
C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\bin

if NOT EXIST obj\NUL mkdir obj
cd obj

REM compling source files
if NOT EXIST Tuple.o g++ -g -c  "..\features\source files\Tuple.cpp"
if NOT EXIST Operations.o g++ -g -c  "..\features\source files\Operations.cpp"


REM compiling test files
if NOT EXIST tuple-test.o g++ -g -c ../test/tuple-test.cpp
if NOT EXIST operations-test.o g++ -g -c ../test/operations-test.cpp


REM linking object files and test files
g++ -o ../../test_exe/tuple-test tuple-test.o Tuple.o
g++ -o ../../test_exe/operation-test operations-test.o Operations.o Tuple.o

REM Run tests
@echo on
