#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Ej1/estructura.h>
#include <Ej2/union.h>
#include <Ej3/copiaEstructura.h>
#include <Ej4/aliasEstructura.h>
#include <Ej5/estructFun.h>

int main() {
    /* Inicializar la lista como NULL,
     * y crear y asignar los valores
     * de los dos estudiantes
     */

    struct Nodo *listaEstudiantes = NULL;
    char respuesta;

    // Preguntar al usuario si desea añadir estudiantes
    for (int i = 0; i < 2; i++) {
        struct Estudiante est;
        obtenerDatosEstudiante(&est);
        agregarEstudiante(&listaEstudiantes, est);
    }

    // Preguntar al usuario si desea eliminar estudiantes
    respuesta = preguntarUsuario("¿Desea eliminar la lista de estudiantes?");
    if (respuesta == 'Y') {
        eliminarEstudiantes(&listaEstudiantes);
    }

    // Preguntar al usuario si desea ver estudiantes
    respuesta = preguntarUsuario("¿Desea ver la lista de estudiantes?");
    if (respuesta == 'Y') {
        verEstudiantes(listaEstudiantes);
    }

    // Llamar a las funciones de los ejercicios:

    // Ejercicio 1:
    instanciarEstructuras();

    // Ejercicio 2:
    unionFuncion();

    // Ejercicio 3:
    struct Estudiante est1, est2;
    obtenerDatosEstudiante(&est1);
    obtenerDatosEstudiante(&est2);
    struct Estudiante copiaEst1 = copiarEstudiante(est1);
    printf("Copia - Nombre: %s, Edad: %d, Promedio: %.2f\n", copiaEst1.nombre, copiaEst1.edad, copiaEst1.promedio);

    // Ejercicio 4:
    Estudiante estudiante3;
    obtenerDatosEstudiante(&estudiante3);
    printf("Alias - Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante3.nombre, estudiante3.edad, estudiante3.promedio);

    // Ejercicio 5:
    imprimirEstudiante(est1);
    modificarEstudiante(&est1);
    imprimirEstudiante2(&est1);
}
