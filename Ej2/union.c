#include <stdio.h>
#include <string.h>
#include <Ej2/union.h>

/* Definición de la unión Dato,
 * que contiene un int, un float y un string.
 */
union Dato {
    int i;
    float f;
    char str[20];
};

void unionFuncion() {
    /* Primero creamos una variable de la unión Dato,
     * al cual le asignamos diferentes tipos de valores
     * (entero, float, string), y luego los imprimimos.
     */

    union Dato dato;

    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);

}