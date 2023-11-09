#include <iostream>
#include <string>

using namespace std;

class estudiante{
    private:
        string nombre;
        int edad;
        string grado;
    public:
        estudiante(string, int, string);
        void mostrar_info();
};

estudiante::estudiante(string _nombre, int _edad, string _grado){
    nombre = _nombre;
    edad = _edad;
    grado = _grado;
}

void estudiante::mostrar_info(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Grado: " << grado << endl;
}

int main(){
    estudiante estudiante1;
    string nombre;
    int edad;
    string grado;
    cout << "Ingrese el nombre del estudiante: "; cin >> nombre;

}