#include <iostream>
#include <stdio.h>  // Librería para usar printf y scanf


// Usamos el espacio de nombres estándar para no tener que escribir std::cout, std::cin, etc.
using namespace std;

// 1. Definición del tipo de dato estructurado "coordenada"
// typedef crea un "alias" o un nuevo nombre para un tipo de dato.
// Aquí, creamos el tipo "coordenada" que es una estructura con dos enteros: x e y.
typedef struct {
    int x;
    int y;
} coordenada;


// El programa principal comienza aquí
int main()
{
    // 2. Declaración de una variable del tipo que creamos
    // "c" es una variable del tipo "coordenada".
    // Automáticamente, "c" tiene dentro un espacio para un entero "x" y otro para un entero "y".
    coordenada c;

    // 3. Interacción con el usuario para llenar los datos de la estructura
    printf("\n ingresar valor de x: ");
    // Usamos scanf para leer un entero (%d) y guardarlo en el miembro "x" de la variable "c".
    // El punto (.) se usa para acceder a los miembros de una estructura.
    // El ampersand (&) es necesario para que scanf sepa la dirección de memoria donde guardar el valor.
    scanf("%d", &c.x);

    printf("\n ingresar valor de y: ");
    // Hacemos lo mismo para el miembro "y".
    scanf("%d", &c.y);

    // 4. Muestra de los resultados almacenados en la estructura
    printf("\n\n el valor de la coordenada es x=%d y=%d", c.x, c.y);


    // Esto es opcional, pero ayuda a que la ventana de consola no se cierre de inmediato.
    printf("\n\nPresione una tecla para continuar...");


    return 0; // Indica que el programa terminó correctamente
}
