// Archivo: coordenada.cpp

#include "coordenada.h" // Incluimos nuestra propia cabecera con comillas

// Incluimos las librerías estándar necesarias para la implementación
#include <stdio.h>


// Implementación de las funciones
int darX(coordenada a) {
    return a.x;
}

int darY(coordenada a) {
    return a.y;
}

void modificarX(coordenada &a, int b) {
    a.x = b;
}

void modificarY(coordenada &a, int b) {
    a.y = b;
}

void mostrarCoordenada(coordenada a) {
    printf("\n x = %d y = %d", a.x, a.y);
}
