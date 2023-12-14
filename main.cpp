#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>

//Estructura del Estudiante: struct C++
struct estudiante {
    std::string nombre;
    int edad;
    float promedio;
    //Gestión de Materias (C++)
    std::vector<std::string> materias;
};

//Estructura del Estudiante: struct C
struct estudianteC {
    char nombre[30];
    int edad;
    float promedio;
};

//Estructura del Estudiante: imprimir C++
void imprimirEstudiante(estudiante est) {
    std::cout << "(C++) Nombre: "<< est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << std::endl;

    //Gestión de Materias (C++)
    std::cout << "Materias: ";

        for (const auto& materia : est.materias) {
            std::cout << " " << materia;
        }

    std::cout << std::endl;
}

    void agregarMateria(estudiante& est, const std::string& materia) {
        est.materias.push_back(materia);
    }


//Estructura del Estudiante: imprimir C
void imprimirEstudianteC(estudianteC est) {
    std::cout << "(C) Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << std::endl;
}

int main() {

//Estructura del Estudiante: Main para C++
    estudiante Estudiante1;

            Estudiante1.nombre = "Fran";
            Estudiante1.edad = 20;
            Estudiante1.promedio = 7.5;

    imprimirEstudiante(Estudiante1);

//Estructura del Estudiante: Main para C
    struct estudianteC Estudiante1C;

            strcpy(Estudiante1C.nombre, "Antonio");
            Estudiante1C.edad = 21;
            Estudiante1C.promedio = 8.5;

    imprimirEstudianteC(Estudiante1C);

    return 0;
}
