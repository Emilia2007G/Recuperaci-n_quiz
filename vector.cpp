#include <iostream>
#include <vector>
using namespace std;

int main(){
// 1. Creamos el vector y le damos los numeros 
    vector<int> numeros = {10, 20, 30, 40, 50};

    // 2. Mostramos el contenido 
    cout << "Numero en la posicion 0: " << numeros[0] << endl;
    cout << "Numero en la posicion 2: " << numeros[2] << endl;
    
    // 3. Mostramos cuantos numeros tiene la lista
    cout << "Total de numeros: " << numeros.size() << endl;

    return 0;
}
