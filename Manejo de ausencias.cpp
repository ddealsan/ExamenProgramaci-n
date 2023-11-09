
#include <iostream>
#include <string>

using namespace std;
class RegistroAsistencia {
private:
    string fecha;
    string estado;

public:
    RegistroAsistencia(string _fecha, string _estado) : fecha(_fecha), estado(_estado) {}

    void mostrar_asistencia() {
        cout << "Fecha de la clase: " << fecha << endl;
        cout << "Estado de asistencia: " << estado << endl;
    }
};

int main(){
    RegistroAsistencia asistencia1("12/03/2021", "Presente");
    RegistroAsistencia asistencia2("13/03/2021", "Ausente");

    asistencia1.mostrar_asistencia();
    asistencia2.mostrar_asistencia();

    return 0;}