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
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
