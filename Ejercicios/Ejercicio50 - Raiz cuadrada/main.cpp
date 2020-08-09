#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double raizCuadrada = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    cout << endl;

    raizCuadrada = sqrt(numero);
  

    cout << "Numero: " << numero << endl;
    cout << "Raiz Cuadrada: " << raizCuadrada << endl;
   
    return 0;
}
