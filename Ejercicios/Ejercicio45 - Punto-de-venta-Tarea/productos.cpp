#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");
    int opcionProducto = 0;

    switch (opcion)
    {
        case 1:
        {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expresso" << endl;
            cout << "3 - Te de Limon" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Capuccino - L.40.00", 1, 40);
                    break;
                case 2:
                    agregarProducto("1 Expresso - L.30.00", 1, 30);
                    break; 
                case 3:
                    agregarProducto("1 Te de Limon - L.25.00", 1, 25);
                    break; 
                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }
            
            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");

            break;
        }
        
        case 2:
        {
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*************" << endl;
            cout << "1 - Granita de Cafe" << endl;
            cout << "2 - Frapuchatta" << endl;
            cout << "3 - Frape de Fresa" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Granita de Cafe - L.35.00", 1, 35);
                    break;
                case 2:
                    agregarProducto("1 Frapuchatta - L.55.00", 1, 55);
                    break; 
                case 3:
                    agregarProducto("1 Frape de Fresa - L.60.00", 1, 60);
                    break; 
                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }
            
            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");

            break;
        }

        case 3:
        {
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;
            cout << "1 - Cheesecake" << endl;
            cout << "2 - Pie de Limon" << endl;
            cout << "3 - Galleta de Avena" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Cheesecake - L.45.00", 1, 45);
                    break;
                case 2:
                    agregarProducto("1 Pie de Limon - L.40.00", 1, 40);
                    break; 
                case 3:
                    agregarProducto("1 Galleta de Avena - L.15", 1, 15);
                    break; 
                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }
            
            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");

            break;
        }

        default:
            break;
    }
}