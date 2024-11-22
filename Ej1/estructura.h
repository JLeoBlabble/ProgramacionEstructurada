#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Apartado a, definición estructura Estudiante.
 * Primero estableces el límite de caracteres para el nombre del estudiante,
 * después declaras la edad y el promedio del estudiante.
 */
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Apartado e, definición estructura Nodo para lista enlazada
struct Nodo {
    struct Estudiante estudiante;
    struct Nodo *siguiente;
};

// Declaración funciones para manejar lista estudiantes
void obtenerDatosEstudiante(struct Estudiante *est);
void instanciarEstructuras();
char preguntarUsuario(const char *mensaje);

struct Nodo *crearNodo(struct Estudiante est);
void agregarEstudiante(struct Nodo **cabeza, struct Estudiante est);
void verEstudiantes(struct Nodo *cabeza);
void eliminarEstudiantes(struct Nodo **cabeza);

#endif // ESTRUCTURA_H
