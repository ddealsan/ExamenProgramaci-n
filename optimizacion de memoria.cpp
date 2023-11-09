#include <iostream>
using namespace std;

void intercambio(int *a, int *b){//definimos la funcion
    int aux = *a;
    *a = *b;//intercambiamos los valores
    *b = aux;
}

int main(){
int A = 10, B = 20;
cout << "valores origniales de A y B: " << A << " " << B << endl;//imprimimos los valores originales
int*a = &A;
int*b = &B;//definimos los punteros
intercambio(a, b);//llamamos a la funcion para intercambiar los valores
cout << "valores intercambiados de A y B: " << A << " " << B << endl;//imprimimos los valores intercambiados
return 0;
}