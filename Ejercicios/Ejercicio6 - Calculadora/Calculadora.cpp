#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{//Datos de entrada
    int a = 0;
    int b = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;

    cout << "Ingrese el valor de a: "; 
    cin >> a;

    cout << endl;

    cout << "Ingrese el valor de b: "; 
    cin >> b;

    cout << endl;

//Proceso
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;
    
//Datos de salida
    cout << "El resultado de a + b es: " << suma;
    cout << endl;
    cout << "El resultado de a - b es: " << resta;
    cout << endl;
    cout << "El resultado de a * b es: " << multiplicacion;
    cout << endl;
    cout << "El resultado de a / b es: " << division;

    return 0;
}
