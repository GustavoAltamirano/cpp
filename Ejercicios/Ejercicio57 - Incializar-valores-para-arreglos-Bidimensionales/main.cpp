#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int fila = 4;
    int columna = 2;

    string nombre[fila][columna]=
    {
        {"Juan", "Perez"},
        {"Maria", "Martinez"},
        {"Jose", "Herrera"},
        {"Manuel", "Lopez"}
    };


    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout << nombre[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}