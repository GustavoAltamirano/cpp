#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char estaExenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento 0, 10, 15, 20: ";
    cin >> descuento;
    
    cout << "Factura exenta? s/n: ";
    cin >> estaExenta;

    //Proceso
    if (estaExenta == 's' || estaExenta == 'S')
    {
   	  calculoDescuento = (subtotal * descuento) / 100;
    	total = subtotal - calculoDescuento;
    }
    else
    {
  	  calculoDescuento = (subtotal * descuento) / 100;
  	  calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
    	total = subtotal - calculoDescuento + calculoImpuesto;
    }

    //Salida
    cout << endl;
    cout << "Total a pagar es: " << total;

    return 0;
}