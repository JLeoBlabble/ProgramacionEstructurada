cmake_minimum_required(VERSION 3.29)
project(ProgramacionEstructurada C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ProgramacionEstructurada
        Ej1/estructura.c
        Ej1/estructura.h
        main.c
        Ej2/union.c
        Ej2/union.h
        Ej3/copiaEstructura.c
        Ej3/copiaEstructura.h
        Ej4/aliasEstructura.h
        Ej5/estructFun.c
        Ej5/estructFun.h)
