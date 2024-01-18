/*1. Suba el enlace al repositorio del GitHub, con el código solicitado.
2. Cada estudiante debe trabajar en el ejemplo de estructura de la clase anterior (alumno) y debe crear un programa
que permita al usuario (menú) el ingreso de datos de n alumnos y además la presentación en pantalla de los alumnos ingresados.
Además, debe utilizar las funciones:
gets();
puts();
fflush();

NOTA: no quemar los datos en el código*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num;
    // Ingreso del numero de alumnos que se van a registrar
    printf("Alumnos a registrar: ");
    scanf("%d", &num);

    // Estructura para los datos del alumno
    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;
    };

    // Declaración de la estructura para el ingreso de datos del alumno
    struct alumno datosAlumno[num];

    // Ingreso de datos del alumno
    for (int i = 0; i < num; i++)
    {
        printf("\nDATOS ALUMNO %d\n\n", i + 1);
        printf("Numero de matricula: ");
        scanf("%d", &datosAlumno[i].matricula);
        fflush(stdin);
        printf("Nombre: ");
        fgets(datosAlumno[i].nombre,50,stdin);
        printf("Direccion: ");
        fgets(datosAlumno[i].direccion,50,stdin);
        printf("Carrera: ");
        fgets(datosAlumno[i].carrera,50,stdin);
        printf("Promedio: ");
        scanf("%f", &datosAlumno[i].promedio);
    }
    puts("\n----------------------------------------");
    // Salida de los datos ingresados
    for (int i = 0; i < num; i++)
    {
        printf("\n\tDATOS ALUMNO %d\n", i + 1);
        printf("Numero de matricula: %d\n", datosAlumno[i].matricula);
        printf("\nNombre: ");
        puts(datosAlumno[i].nombre);
        printf("Direccion: ");
        puts(datosAlumno[i].direccion);
        printf("Carrera: ");
        puts(datosAlumno[i].carrera);
        printf("Promedio: %.2f\n\n", datosAlumno[i].promedio);
    }
    puts("\n----------------------------------------");

    return 0;
}
