#include <iostream>

using namespace std;

void productos(int opcion)
{
    switch (opcion)
    {
        case 1:
        {
            system("cls");
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            system("pause");
            break;
        }
        
        case 2:
        {
            system("cls");
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*************" << endl;
            system("pause");
            break;
        }

        case 3:
        {
            system("cls");
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;
            system("pause");
            break;
        }
        
        default:
            break;
    }
}