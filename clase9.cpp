

//Clase_9

#include <iostream>
#include <stdio.h> /

using namespace std;

int main() {

    int a;
    int b;
    int c;
    a = 0;
    b = 0;
    c = 0;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    c = a + b;
    printf("\nEl resultado de la suma es: %d\n", c);
    return 0;
}



//Clase_12

#include <iostream>
#include <stdio.h> /

using namespace std;

int main() {

char a;
    a=' ';
    printf("\nIngrese caracter ");
    scanf("%c",&a);
    printf("\n El caracter entrado es %C", a);

    return 0;
    
}


//clase 16

#include <iostream>
#include <stdio.h>


using namespace std;


bool esPar(int a) {
    int c;
    int r;
    c = a / 2;
    r = a - (c * 2);
    if (r == 0) {
        return true;
    } else {
        return false;
    }
}

void saluda(int a) {
    int i;
    for (i = 0; i < a; i++) {
        printf("\n Hola");
    }
}


int main() {

    int w;
    printf("Ingrese un numero: ");
    scanf("%d", &w);
    if (esPar(w) == true) {
        printf("\nEl numero es PAR");
    } else {
        printf("\nEl numero es IMPAR");
    }
    printf("\n\n-- Invocando al procedimiento saluda --");
    saluda(4);
    return 0;

}


//Clase 16

#include <iostream>
#include <stdio.h>


using namespace std;


bool esPar(int a) {
    int c;
    int r;
    c = a / 2;
    r = a - (c * 2);
    if (r == 0) {
        return true;
    } else {
        return false;
    }
}

void saluda(int a) {
    int i;
    for (i = 0; i < a; i++) {
        printf("\n Hola");
    }
}


int main() {

    int w;
    printf("Ingrese un numero: ");
    scanf("%d", &w);
    if (esPar(w) == true) {
        printf("\nEl numero es PAR");
    } else {
        printf("\nEl numero es IMPAR");
    }
    printf("\n\n-- Invocando al procedimiento saluda --");
    saluda(4);
    return 0;

}


//EJERCICO 1  MIERCOLES 2 

#include <iostream>
#include <stdio.h>

using namespace std;

int producto(int a, int b) {

    int resultado_multiplicacion = a * b;
    return resultado_multiplicacion;

}

int main() {

    int numero1;
    int numero2;
    int resultado_final;
    printf("--- Calculadora de Productos ---\n");
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);
    resultado_final = producto(numero1, numero2);
    printf("\nEl resultado de la multiplicacion es: %d\n", resultado_final);
    return 0;

}
