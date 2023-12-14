#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>

//struct C++
struct estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

//struct C
struct estudianteC {
    char nombre[30];
    int edad;
    float promedio;
};

//imprimir C++
void imprimirEstudiante(estudiante est) {
    std::cout << "(C++) Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << std::endl;
}

//imprimir C
void imprimirEstudianteC(estudianteC est) {
    std::cout << "(C) Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << std::endl;
}

int main() {

//Main para C++
    estudiante Estudiante1;

            Estudiante1.nombre = "Fran";
            Estudiante1.edad = 20;
            Estudiante1.promedio = 7.5;

    imprimirEstudiante(Estudiante1);

//Main para C
    struct estudianteC Estudiante1C;

            strcpy(Estudiante1C.nombre, "Antonio");
            Estudiante1C.edad = 21;
            Estudiante1C.promedio = 8.5;

    imprimirEstudianteC(Estudiante1C);

    return 0;
}
