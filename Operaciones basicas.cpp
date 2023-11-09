#include <iostream>

using namespace std;

int main(){

    int a, b; //definimos las variables
    cout << "Ingrese el primer numero: "; cin >> a; //pedimos al usuario que ingrese los numeros
    cout << "Ingrese el segundo numero: "; cin >> b;

    int suma = a + b;//realizamos la suma

    cout << "La suma es: " << suma << endl; //imprimimos el resultado

    return 0;
}