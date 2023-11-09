#include <iostream>
using namespace std;

void intercambio(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
int A = 10, B = 20;
cout << "valores origniales de A y B: " << A << " " << B << endl;
int*a = &A;
int*b = &B;
intercambio(a, b);
}