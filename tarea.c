/*1. Suba el enlace al repositorio del GitHub, con el código solicitado.
2. Cada estudiante debe trabajar en el ejemplo de estructura de la clase anterior (alumno) y debe crear un programa
que permita al usuario (menú) el ingreso de datos de n alumnos y además la presentación en pantalla de los alumnos ingresados.
Además, debe utilizar las funciones:
gets();
puts();
fflush();

NOTA: no quemar los datos en el código*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Alumnos a registrar: ");
    scanf("%d", &num);

    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;
    };

    struct alumno datosAlumno[num];



    return 0;
}
