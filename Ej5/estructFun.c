#include <stdio.h>
#include "estructFun.h"

// Función para imprimir un estudiante (por valor)
void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// Función para modificar un estudiante (por referencia)
void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}

// Función para imprimir un estudiante (por dirección)
void imprimirEstudiante2(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}