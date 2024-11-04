#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Datos.h"

#define MAX_LENGTH 50


int main(){

    char usuario[MAX_LENGTH], clave[MAX_LENGTH];

    printf("Ingrese el usuario: ");
    scanf("%s", usuario);
    printf("Ingrese la clave: ");
    scanf("%s", clave);

    if (verificar_credenciales(usuario, clave)) {
        printf("Ingreso exitoso.\n");
        registrar_bitacora(usuario, "Ingreso exitoso al sistema");

        int t;
        do {
            printf("Escoja una opción del menú:\n");
            printf("1. Calcular geometria de Dos dimensiones\n");
            printf("2. Calcular geometria de Tres dimensiones\n");
            printf("3. Terminar programa\n");
            char entrada[10];
            scanf("%d", &t);

            switch(t) {
                case 1:
                    printf("Has elegido la opción 1.\n");
                    calcular2D(usuario);
                    break;
                case 2:
                    printf("Has elegido la opción 2.\n");
                    calcular3D(usuario);
                    break;
                case 3:
                    printf("Programa Terminado, gracias.\n");
                    break;
                default:
                    printf("Opción no válida. Por favor ingrese una opcion\n");
                }
        } while (t != 3);
    } else {
        printf("Usuario o clave incorrectos.\n");
        registrar_bitacora(usuario, "Ingreso fallido usuario/clave erróneo");
    }
    return 0;
    
}



