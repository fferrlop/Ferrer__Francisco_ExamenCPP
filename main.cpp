#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>

class Asistencia;
//Estructura del Estudiante: struct C++
struct estudiante {
    std::string nombre;
    int edad;
    float promedio;
    //Gestión de Materias (C++)
    std::vector<std::string> materias;
    //Gestión de Asistencias (C++)
    std::vector<Asistencia> asistencias;
};

//Clase asistencia (C++)
class Asistencia {
public:
    std::string fecha;
    std::string materia;
    std::string estado;

    Asistencia(const std::string& fecha, const std::string& materia, const std::string& estado)
            : fecha(fecha), materia(materia), estado(estado) {}
};


//Clase asistencia (C++)
void imprimirAsistencia(const Asistencia& asistencia) {
    std::cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia
              << ", Estado: " << asistencia.estado << std::endl;
}

void registrarAsistencia(estudiante& est, const Asistencia& asistencia) {
    est.asistencias.push_back(asistencia);
}

void mostrarAsistencia(const estudiante& est) {
    std::cout << "Asistencia de " << est.nombre << ":" << std::endl;
    for (const auto& asistencia : est.asistencias) {
        imprimirAsistencia(asistencia);
    }
}

//Estructura del Estudiante: struct C
struct estudianteC {
    char nombre[30];
    int edad;
    float promedio;
    //Gestion de materias (C)
    char materias[30][30];
    int numMaterias;
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

    void eliminarMateria(estudiante& est, const std::string& materia) {
        auto it = std::find(est.materias.begin(), est.materias.end(), materia);
        if (it != est.materias.end()) {
            est.materias.erase(it);
        }
    }


//Estructura del Estudiante: imprimir C
void imprimirEstudianteC(estudianteC est) {
    printf("(C) Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);

    //Gestion de materias (C)
    printf("Materias:");
        for (int i = 0; i < est.numMaterias; ++i) {
            printf(" %s", est.materias[i]);
        }
        printf("\n");
}

    void agregarMateriaC(struct estudianteC *est, const char *materia) {

        if (est->numMaterias < 5) {
            strcpy(est->materias[est->numMaterias], materia);
            est->numMaterias++;
        }
        else {
            printf("No se pueden agregar más materias.\n");
        }
    }

    void eliminarMateriaC(struct estudianteC *est, const char *materia) {
        for (int i = 0; i < est->numMaterias; ++i) {

            if (strcmp(est->materias[i], materia) == 0) {

                for (int j = i; j < est->numMaterias - 1; ++j) {
                    strcpy(est->materias[j], est->materias[j + 1]);
                }
                est->numMaterias--;
                return;
            }
        }
        printf("La materia no se encontró en la lista.\n");
    }


int main() {

//Estructura del Estudiante: Main para C++
    estudiante Estudiante1;

            Estudiante1.nombre = "Fran";
            Estudiante1.edad = 20;
            Estudiante1.promedio = 7.5;
    //Gestión de Materias (C++)
                agregarMateria(Estudiante1, "Matematicas");
                agregarMateria(Estudiante1, "Programacion");

    imprimirEstudiante(Estudiante1);

                eliminarMateria(Estudiante1, "Matematicas");

    imprimirEstudiante(Estudiante1);

//Estructura del Estudiante: Main para C
    struct estudianteC Estudiante1C;

            strcpy(Estudiante1C.nombre, "Antonio");
            Estudiante1C.edad = 21;
            Estudiante1C.promedio = 8.5;
    //Gestion de materias (C)
            Estudiante1C.numMaterias = 0;

                agregarMateriaC(&Estudiante1C, "Matematicas");
                agregarMateriaC(&Estudiante1C, "Programacion");

    imprimirEstudianteC(Estudiante1C);

                eliminarMateriaC(&Estudiante1C, "Matematicas");

    imprimirEstudianteC(Estudiante1C);

    return 0;
}
