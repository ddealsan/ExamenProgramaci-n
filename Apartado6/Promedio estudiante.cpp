#include <iostream>
#include <vector>

using namespace std;

double calcularPromedio(const std::vector<int>& calificaciones) {//definimos la funcion
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    double promedio = static_cast<double>(suma) / calificaciones.size();
    return promedio;

}


int main(){
    cout << "Ingrese las calificaciones (ingrese -1 para finalizar):\n";

    vector<int> calificaciones;
    int calificacion;

    while (true) {
        cin >> calificacion;

        if (calificacion == -1) {
            break;  // El usuario ingresó -1 para finalizar
        }

        calificaciones.push_back(calificacion);
    }

    double promedio = calcularPromedio(calificaciones);//llamamos a la funcion
    cout << "El promedio de las calificaciones es: " << promedio << endl;//imprimimos el resultado

    return 0;
}