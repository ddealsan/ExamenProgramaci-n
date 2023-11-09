#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estudiante {//cramos la clase estudiante
private:
    string nombre;//definimos lo que hay dentro de ella
    int edad;
    string grado;
    vector<string> materias;
public:
    Estudiante(string, int, string);
    void registrar_materia(const string&);
    void mostrar_info();
    void mostrar_materias();
};

Estudiante::Estudiante(string _nombre, int _edad, string _grado){
    nombre = _nombre;
    edad = _edad;
    grado = _grado;
}

void Estudiante::registrar_materia(const string& materia) {
    materias.push_back(materia);
}

void Estudiante::mostrar_info(){//definimos el mostrar informacion
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Grado: " << grado << endl;
}

void Estudiante::mostrar_materias() {
    if (materias.empty()) {
        cout << "El estudiante no tiene materieas registradas." << endl;
    } else {
        cout << "Materiasf registradas:" << endl;
        for (const string& materia : materias) {
            cout << "- " << materia << endl;
        }
    }
}


int main(){//definimos el main
    Estudiante estudiante1("Juan", 15, "9");

    estudiante1.mostrar_info();//mostramos la informacion
string materia1;
    cout <<" que materia desea añadir?"<<endl;
    cin>>materia1;
    estudiante1.registrar_materia(materia1);
    estudiante1.mostrar_materias();

    return 0;
}