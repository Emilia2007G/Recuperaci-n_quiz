#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    // Definimos los numeros 
    double base = 5;
    double exponente = 2;

    // Usamos funciones de la libreria 
    double potencia = pow(base, exponente);
    double raiz = sqrt(potencia);

    cout << "5 al cuadrado es: " << potencia << endl;
    cout << "La raiz de " << potencia << " es: " << raiz << endl;

    return 0;
}