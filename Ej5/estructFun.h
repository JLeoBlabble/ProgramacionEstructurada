#ifndef ESTRUCTURASFUNCIONES_H
#define ESTRUCTURASFUNCIONES_H

#include "../Ej1/estructura.h"

// Crear un alias para la estructura Estudiante
typedef struct Estudiante Estudiante;

/* Prototipos de las funciones,
 * para imprimir por valor, modificar por referencia
 * e imprimir por dirección
 */
void imprimirEstudiante(Estudiante est);
void modificarEstudiante(Estudiante *est);
void imprimirEstudiante2(Estudiante *est);

#endif // ESTRUCTURASFUNCIONES_H