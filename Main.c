#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Datos.h"


int main(){

    printf("Escoja una opción del menú:\n");
    printf("1. Calcular Area/Perimetro Triangulo\n");
    printf("2. Calcular Area/Perimetro Paralelogramo\n");
    printf("3. Terminar programa\n");
    char entrada[10];
    int t;
    scanf("%d", &t);

    switch(t) {
        case 1:
            printf("Has elegido la opción 1.\n");
            calcular2D();
            printf("Escoja una opción del menú:\n");
                printf("1. Calcular Area/Perimetro Triangulo\n");
                printf("2. Calcular Area/Perimetro Paralelogramo\n");
                printf("3. Terminar programa total\n");
                scanf("%d", &t);
            break;
        case 2:
            printf("Has elegido la opción 2.\n");
            calcular3D();
            printf("Escoja una opción del menú:\n");
                printf("1. Calcular Area/Perimetro Triangulo\n");
                printf("2. Calcular Area/Perimetro Paralelogramo\n");
                printf("3. Terminar programa total\n");
            scanf("%d", &t);
            break;
        case 3:
            printf("Programa Terminado, gracias.\n");
            break;
        default:
            printf("Opción no válida. Por favor ingrese una opcion\n");
            printf("Escoja una opción del menú:\n");
            printf("1. Calcular Area/Perimetro Triangulo\n");
            printf("2. Calcular Area/Perimetro Paralelogramo\n");
            printf("3. Terminar programa total\n");
            scanf("%d", &t);
            break;
    }
    return 0;
    
}



