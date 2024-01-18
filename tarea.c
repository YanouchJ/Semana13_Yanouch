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

    puts("\nINGRESO DE DATOS");
    for (int i = 0; i < num; i++)
    {
        printf("DATOS ALUMNO %d\n", i+1);
        printf("Numero de matricula: ");
        scanf("%d", &datosAlumno[i].matricula);
        printf("Nombre: ");
        scanf("%s", datosAlumno[i].nombre);
        printf("Direccion: ");
        scanf("%s", datosAlumno[i].direccion);
        printf("Carrera: ");
        scanf("%s", datosAlumno[i].carrera);
        printf("Promedio: ");
        scanf("%f", &datosAlumno[i].promedio);
    }
    puts("\nDATOS INGRESADOS");
    for (int i = 0; i < num; i++)
    {
        printf("\nDATOS ALUMNO %d\n", i + 1);
        printf("Numero de matricula: %d", datosAlumno[i].matricula);
        printf("\nNombre: %s", datosAlumno[i].nombre);
        printf("\nDireccion: %s", datosAlumno[i].direccion);
        printf("\nCarrera: %s", datosAlumno[i].carrera);
        printf("\nPromedio: %.2f", datosAlumno[i].promedio);
    }
    
    



    return 0;
}
