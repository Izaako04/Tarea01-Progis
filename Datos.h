#ifndef DATOS
#define DATOS
void imprimirMenu2D();
void imprimirMenu3D();
void calcular3D();
void calcular2D();

//Geometria 3D
void calcularConoCircularRecto();
void calcularEsfera();
void calcularCilindroRecto();
void calcularCuboide();
void calcularCubo();

//Geometria 2D
void calcularPR();
void calcularCirculo();
void calcularTrapecio();
void calcularombo();
void calcularRectangulo();
void calcularCuadrado();
void calcularParalelogramo();
void calcularTrianguloA();

//Registro
int verificar_credenciales(const char *usuario, const char *clave);
void registrar_bitacora(const char *usuario, const char *accion);
void obtener_fecha_actual(char *fecha);


#endif