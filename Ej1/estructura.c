#include "estructura.h"

// Obtener datos estudiantes
void obtenerDatosEstudiante(struct Estudiante *est) {
    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", est->nombre);

    do {
        printf("Ingrese la edad del estudiante (<=18 y >=100): ");
        scanf("%d", &est->edad);
    } while (est->edad < 18 || est->edad > 100);

    do {
        printf("Ingrese el promedio del estudiante (>=0 y <=10): ");
        scanf("%f", &est->promedio);
    } while (est->promedio < 0 || est->promedio > 10);
}

// Función para preguntar al usuario si desea ver/eliminar estudiantes
char preguntarUsuario(const char *mensaje) {
    char respuesta;
    do {
        printf("%s (Y/N): ", mensaje);
        scanf(" %c", &respuesta);
    } while (respuesta != 'Y' && respuesta != 'N');
    return respuesta;
}

/* Apartado b, función para instanciar estructuras y mostrar sus valores.
 * Primero crea la instancia de la estructura Estudiante,
 * proseguidamente se asigna los valores a los campos de la estructura.
 */
void instanciarEstructuras() {
    struct Estudiante estudiante1;
    obtenerDatosEstudiante(&estudiante1);

    /* Apartado c, instanciación con el operador malloc.
     * Se asignan los valores a los campos mediante el uso del punteo
     */
    struct Estudiante *estudiante2 = (struct Estudiante *) malloc(sizeof(struct Estudiante));
    obtenerDatosEstudiante(estudiante2);

    /* Apartado d, creamos un puntero a la estructura Estudiante
     * y lo inicializamos con la dirección de la estructura estudiante1.
     * Después imprimimos los valores de la estructura a través del puntero.
     */
    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

    punteroEst = estudiante2;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

    free(estudiante2);
}

/* Apartado e, función para crear un nuevo nodo en la lista enlazada */
struct Nodo *crearNodo(struct Estudiante est) {
    struct Nodo *nuevoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    nuevoNodo->estudiante = est;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

// Función para añadir estudiante a la lista
void agregarEstudiante(struct Nodo **cabeza, struct Estudiante est) {
    struct Nodo *nuevoNodo = crearNodo(est);
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
}

// Función para ver todos los estudiantes en la lista
void verEstudiantes(struct Nodo *cabeza) {
    struct Nodo *temp = cabeza;
    while (temp != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", temp->estudiante.nombre, temp->estudiante.edad, temp->estudiante.promedio);
        temp = temp->siguiente;
    }
}

// Función para eliminar todos los estudiantes de la lista
void eliminarEstudiantes(struct Nodo **cabeza) {
    struct Nodo *temp = *cabeza;
    while (*cabeza != NULL) {
        temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
    }
}