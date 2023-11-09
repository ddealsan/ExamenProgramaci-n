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
        Estudiante(string, int, string, string);
        void mostrar_info();
};

Estudiante::Estudiante(string _nombre, int _edad, string _grado, string _seccion){
    nombre = _nombre;
    edad = _edad;
    grado = _grado;
}



