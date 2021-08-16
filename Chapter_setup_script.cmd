@echo off
C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\putting_it_together

g++ -g -c ".\Chapter 1\Projectile.cpp"
g++ -g -c ".\Chapter 1\main.cpp"

C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\bin\obj

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

C:
cd \Users\jkaog\Desktop\Coding\RayTracing Challenge\putting_it_together

g++ -o main main.o Projectile.o ..\bin\obj\Operations.o ..\bin\obj\Tuple.o