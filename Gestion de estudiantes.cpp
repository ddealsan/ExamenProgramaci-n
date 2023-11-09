#include <iostream>
#include <string>
#include <string>

using namespace std;

class Estudiante {//cramos la clase estudiante
    private:
        string nombre;//definimos lo que hay dentro de ella
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

void Estudiante::mostrar_info(){//definimos el mostrar informacion
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Grado: " << grado << endl;
}

int main(){//definimos el main
    Estudiante estudiante1("Juan", 15, "9");
    cout<<"\n";
    Estudiante estudiante2("Maria", 16, "10");//creamos los estudiantes

    estudiante1.mostrar_info();//mostramos la informacion
    estudiante2.mostrar_info();

    return 0;
    }