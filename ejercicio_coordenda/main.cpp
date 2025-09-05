

#include <iostream>
#include <stdio.h>


#include "coordenada.h"

using namespace std;

int main()
{
    coordenada w; 
    int z = 0;  

    printf("\nIngresar valor para x: ");
    scanf("%d", &z);
    modificarX(w, z); 
    printf("\nIngresar valor para y: ");
    scanf("%d", &z);
    modificarY(w, z); 
    mostrarCoordenada(w); 
    printf("\n\nPress any key to continue.");


    return 0;
}
