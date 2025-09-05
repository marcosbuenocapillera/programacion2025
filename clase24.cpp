#include <iostream>
#include <stdio.h>  

using namespace std;

typedef struct {
    int x;
    int y;
} coordenada;

int main()
{

    coordenada c;
    printf("\n ingresar valor de x: ");
    scanf("%d", &c.x);
    printf("\n ingresar valor de y: ");
    scanf("%d", &c.y);
    printf("\n\n el valor de la coordenada es x=%d y=%d", c.x, c.y);
    printf("\n\nPresione una tecla para continuar...");
    return 0; 
}
