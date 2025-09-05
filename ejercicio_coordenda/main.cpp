

#include <iostream>
#include <stdio.h>


#include "coordenada.h"

using namespace std;

int main()
{
    coordenada w; // Creamos una variable de nuestro nuevo tipo
    int z = 0;   // Variable auxiliar para leer los datos

    printf("\nIngresar valor para x: ");
    scanf("%d", &z);
    modificarX(w, z); // Usamos la función de nuestra librería para modificar w

    printf("\nIngresar valor para y: ");
    scanf("%d", &z);
    modificarY(w, z); // Reutilizamos z y llamamos a la otra función

    mostrarCoordenada(w); // Mostramos el resultado final

    // Pausa para que la consola no se cierre inmediatamente
    printf("\n\nPress any key to continue.");


    return 0;
}
