
#include <iostream>
#include <string>

using namespace std;
class RegistroAsistencia {
private:
    string fecha;
    string estado;

public:
    RegistroAsistencia(string _fecha, string _estado) : fecha(_fecha), estado(_estado) {}//definimos el constructor

    void mostrar_asistencia() {
        cout << "Fecha de la clase: " << fecha << endl;//mostramos la informacion
        cout << "Estado de asistencia: " << estado << endl;
    }
};

int main(){
    RegistroAsistencia asistencia1("12/03/2021", "Presente");
    RegistroAsistencia asistencia2("13/03/2021", "Ausente");//creamos los registros de asistencia

    asistencia1.mostrar_asistencia();//mostramos la informacion
    asistencia2.mostrar_asistencia();

    return 0;}