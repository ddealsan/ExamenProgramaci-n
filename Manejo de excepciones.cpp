#include <iostream>
#include <stdexcept>

using namespace std;

void excepcion(){
    throw runtime_error("Error");//lanzamos la excepcion
}
int main(){
    try{//iniciamos el bloque try
        excepcion();//llamamos a la funcion
        }
    catch(runtime_error &e) {//iniciamos el bloque catch
        cout << e.what() << endl;//imprimimos el mensaje de error
    }
    return 0;
}