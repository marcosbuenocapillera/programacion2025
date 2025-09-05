#ifndef COORDENADA_H_INCLUDED
#define COORDENADA_H_INCLUDED



// Definición del tipo de dato estructurado
typedef struct {
    int x;
    int y;
} coordenada;

// Declaración de las funciones (prototipos)
int darX(coordenada a);
int darY(coordenada a);
void modificarX(coordenada &a, int b);
void modificarY(coordenada &a, int b);
void mostrarCoordenada(coordenada a);


#endif // COORDENADA_H_INCLUDED
