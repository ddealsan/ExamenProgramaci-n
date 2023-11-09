#include <iostream>
#include <string>
#include <string>

using namespace std;

class Estudiante {
    private:
        string nombre;
        int edad;
        string grado;
    public:
        Estudiante(string, int, string);
        void mostrar_info();
};

Estudiante::Estudiante(string _nombre, int _edad, string _grado){
    nombre = _nombre;
    edad = _edad;
    grado = _grado;
}

void Estudiante::mostrar_info(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Grado: " << grado << endl;
}

int main(){
    Estudiante estudiante1("Juan", 15, "9");

    Estudiante estudiante2("Maria", 16, "10");

    estudiante1.mostrar_info();
    estudiante2.mostrar_info();

    return 0;
    }