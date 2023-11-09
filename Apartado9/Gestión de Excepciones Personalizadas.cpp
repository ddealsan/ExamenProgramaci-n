#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

class MateriaYaRegistradaException : public exception {//creamos la clase MateriaYaRegistradaException
public:
    const char* what() const throw() {
        return "Error: La materia ya ha sido registrada.";
    }
};

class Estudiante {//cramos la clase estudiante
private:
    string nombre;
    int edad;
    string grado;
    vector<string> materias;

public:
    Estudiante(string _nombre, int _edad, string _grado) : nombre(_nombre), edad(_edad), grado(_grado) {}

    string obtenerGrado() const {//definimos el obtener grado
        return grado;
    }

    void registrarMateria(string materia) {
        for (const string& materiaRegistrada : materias) {
            if (materiaRegistrada == materia) {
                throw MateriaYaRegistradaException();
            }
        }
        materias.push_back(materia);
    }

    void mostrarMaterias() const {
        cout << "Materias registradas por " << nombre << ":" << endl;
        for (const string& materia : materias) {
            cout << "- " << materia << endl;
        }
    }
};

int main() {
    try {//definimos el main
        Estudiante estudiante1("Juan", 15, "9A");

        estudiante1.registrarMateria("Matemáticas");
        estudiante1.registrarMateria("Historia");//añadimos las materias

        // Intentar registrar la misma materia nuevamente (debería lanzar la excepción)
        estudiante1.registrarMateria("Matemáticas");

        estudiante1.mostrarMaterias();
    } catch (const MateriaYaRegistradaException& e) {
        cerr << "Excepción: " << e.what() << endl;
    }

    return 0;
}




