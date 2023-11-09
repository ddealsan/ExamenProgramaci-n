#include <iostream>
#include <stdexcept>

using namespace std;

void excepcion(){
    throw runtime_error("Error");
}
int main(){
    try{
        excepcion();
        }
    catch(runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}