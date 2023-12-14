#include <iostream>
#include <cstring>

struct estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

void imprimirEstudiante(estudiante est) {
    std::cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << std::endl;
}




int main() {

    estudiante Estudiante1;

            Estudiante1.nombre = "Fran";
            Estudiante1.edad = 20;
            Estudiante1.promedio = 7.5;


    imprimirEstudiante(Estudiante1);

    return 0;
}
