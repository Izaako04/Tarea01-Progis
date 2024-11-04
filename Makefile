all: programa

programa: Main.o Datos.o SuperVolumen.o AreaPerimetro.o Registro.o
	gcc -o prueba Main.o Datos.o SuperVolumen.o AreaPerimetro.o Registro.o

Main.o: Main.c Datos.h
	gcc -c Main.c

Datos.o: Datos.c Datos.h
	gcc -c Datos.c

SuperVolumen.o: SuperVolumen.c Datos.h
	gcc -c SuperVolumen.c

AreaPerimetro.o: AreaPerimetro.c Datos.h
	gcc -c AreaPerimetro.c

Registro.o: Registro.c Datos.h
	gcc -c Registro.c

clean:
	rm -f programa *.o