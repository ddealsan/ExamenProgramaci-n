#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    string grado;

public:
    Estudiante(string _nombre, int _edad, string _grado) : nombre(_nombre), edad(_edad), grado(_grado) {}
    string obtenerGrado() const {
        return grado;
    }

    void mostrar_info() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Grado: " << grado << endl;
    }
};

vector<Estudiante> filtrarEstudiantesPorGrado(const vector<Estudiante>& estudiantes, const string& grado) {
    vector<Estudiante> estudiantesFiltrados;
    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.obtenerGrado() == grado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }
    return estudiantesFiltrados;
}

