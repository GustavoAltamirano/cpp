#include <iostream>

using namespace std;

double subtotal;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos =listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Detalle de Productos: " << endl;
    cout << "-----------------------------------" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "Subtotal-----: L." << subtotal << endl;
    cout << "ISV 15%:-----: L." << subtotal * 0.15 << endl;
    cout << "-----------------------------------" << endl;
    cout << "Total a Pagar: L." << subtotal * 1.15 << endl;
    cout << endl;
    cout << endl;
    system("pause");
}