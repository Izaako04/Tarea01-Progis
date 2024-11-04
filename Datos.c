#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Datos.h"


void imprimirMenu2D(){
    printf("Escoja una opción del menú:\n");
    printf("1. Calcular Area/Perimetro Triangulo\n");
    printf("2. Calcular Area/Perimetro Paralelogramo\n");
    printf("3. Calcular Area/Perimetro Cuadrado\n");
    printf("4. Calcular Area/Perimetro Rectangulo\n");
    printf("5. Calcular Area/Perimetro Rombo\n");
    printf("6. Calcular Area/Perimetro Trapecio\n");
    printf("7. Calcular Area/Perimetro Circulo\n");
    printf("8. Calcular Area/Perimetro Poligono Regular\n");
    printf("9. Salir\n");
}

void imprimirMenu3D(){
    printf("Escoja una opción del menú:\n");
    printf("1. Calcular Superficie/Volumen Cubo\n");
    printf("2. Calcular Superficie/Volumen Cuboide\n");
    printf("3. Calcular Superficie/Volumen Cilindro recto\n");
    printf("4. Calcular Superficie/Volumen esfera\n");
    printf("5. Calcular Superficie/Volumen Cono Circular recto\n");
    printf("6. Salir\n");
}

void calcular3D(){
    imprimirMenu3D();
    char entrada[10];
    int x;
    scanf("%d", &x);
    switch(x) {
        case 1:
            printf("Has elegido la opción 1.\n");
            calcularTrianguloA();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu3D();
            scanf("%d", &x);
            break;
        case 2:
            printf("Has elegido la opción 2.\n");
            calcularParalelogramo();
            imprimirMenu3D();
            scanf("%d", &x);
            break;
        case 3:
            printf("Has elegido la opción 3.\n");
            calcularCuadrado();
            imprimirMenu3D();
            scanf("%d", &x);
            break;
        case 4:
            printf("Has elegido la opción 4.\n");
            calcularRectangulo();
            imprimirMenu3D();
            scanf("%d", &x);
            break;
        case 5:
            printf("Has elegido la opción 5.\n");
            calcularombo();
            imprimirMenu3D();
            scanf("%d", &x);
            break;
        case 6:
            printf("Saliendo de calculadora 3D... \n");
            break;
        default:
            printf("Opción no válida. Por favor ingrese una opcion\n");
            imprimirMenu3D();
            scanf("%d", &x);
            break;
    }
}

void calcular2D(){
    imprimirMenu2D();
    char entrada[10];
    int x;
    scanf("%d", &x);

    switch(x) {
        case 1:
            printf("Has elegido la opción 1.\n");
            calcularTrianguloA();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
        case 2:
            printf("Has elegido la opción 2.\n");
            calcularParalelogramo();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
        case 3:
            printf("Has elegido la opción 3.\n");
            calcularCuadrado();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
        case 4:
            printf("Has elegido la opción 4.\n");
            calcularRectangulo();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
        case 5:
            printf("Has elegido la opción 5.\n");
            calcularombo();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();;
            scanf("%d", &x);
            break;
        case 6:
            printf("Has elegido la opción 6.\n");
            calcularTrapecio();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
        case 7:
            printf("Has elegido la opción 7.\n");
            calcularCirculo();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
        case 8:
            printf("Has elegido la opción 8.\n");
            calcularPR();
            printf("\n Si desea realizar el analisis de otra figura o salir:\n ");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
        case 9:
            printf("Saliendo de calculadora 2D... \n");
            break;
        default:
            printf("Opción no válida. Por favor ingrese una opcion\n");
            imprimirMenu2D();
            scanf("%d", &x);
            break;
    }
    
}

