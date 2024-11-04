#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LENGTH 50

void obtener_fecha_actual(char *fecha) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(fecha, "%04d/%02d/%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}

void registrar_bitacora(const char *usuario, const char *accion) {
    FILE *bitacora = fopen("bitacora.txt", "a");
    if (bitacora == NULL) {
        perror("No se pudo abrir el archivo de bitácora");
        exit(1);
    }
    char fecha[11];
    obtener_fecha_actual(fecha);
    fprintf(bitacora, "%s: %s – %s\n", fecha, usuario, accion);
    fclose(bitacora);
}

int verificar_credenciales(const char *usuario, const char *clave) {
    FILE *archivo = fopen("usuarios.txt", "r");
    if (archivo == NULL) {
        perror("No se pudo abrir el archivo de usuarios");
        exit(1);
    }

    char linea[MAX_LENGTH];
    char usuario_archivo[MAX_LENGTH], clave_archivo[MAX_LENGTH];

    while (fgets(linea, MAX_LENGTH, archivo) != NULL) {
        sscanf(linea, "%[^-]-%s", usuario_archivo, clave_archivo);
        if (strcmp(usuario, usuario_archivo) == 0 && strcmp(clave, clave_archivo) == 0) {
            fclose(archivo);
            return 1;
        }
    }

    fclose(archivo);
    return 0;
}
