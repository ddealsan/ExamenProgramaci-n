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
    Estudiante(string _nombre, int _edad, string _grado) : nombre(_nombre), edad(_edad), grado(_grado) {}//creamos la clase estudiante

    string obtenerGrado() const {
        return grado;
    }

    void mostrar_info() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Grado: " << grado << endl;//definimos el mostrar informacion
    }
};

vector<Estudiante> filtrarEstudiantesPorGrado(const vector<Estudiante>& estudiantes, const string& grado) {//filtramos los estudiantes
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
    Estudiante estudiante2("Maria", 16, "10B");//creamos los estudiantes
    Estudiante estudiante3("Carlos", 14, "9A");
    Estudiante estudiante4("Laura", 15, "10B");

    vector<Estudiante> listaEstudiantes = {estudiante1, estudiante2, estudiante3, estudiante4};
    cout <<"que grado quieres que sea, 9A o 10B?"<<endl;//filtramos los estudiantes
    string gradoFiltrar;
    cin>>gradoFiltrar;
    vector<Estudiante> estudiantesFiltrados = filtrarEstudiantesPorGrado(listaEstudiantes, gradoFiltrar);//filtramos los estudiantes

    cout << "Estudiantes del grado " << gradoFiltrar << ":" << endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        estudiante.mostrar_info();
    }

    return 0;
}