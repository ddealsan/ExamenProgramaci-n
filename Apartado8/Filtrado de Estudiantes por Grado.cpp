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

    void mostrar_info() const {
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

int main() {
    Estudiante estudiante1("Juan", 15, "9A");
    Estudiante estudiante2("Maria", 16, "10B");
    Estudiante estudiante3("Carlos", 14, "9A");
    Estudiante estudiante4("Laura", 15, "10B");

    vector<Estudiante> listaEstudiantes = {estudiante1, estudiante2, estudiante3, estudiante4};
    cout <<"que grado quieres que sea, 9A o 10B?"<<endl;
    string gradoFiltrar;
    cin>>gradoFiltrar;
    vector<Estudiante> estudiantesFiltrados = filtrarEstudiantesPorGrado(listaEstudiantes, gradoFiltrar);

    cout << "Estudiantes del grado " << gradoFiltrar << ":" << endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        estudiante.mostrar_info();
    }

    return 0;
}