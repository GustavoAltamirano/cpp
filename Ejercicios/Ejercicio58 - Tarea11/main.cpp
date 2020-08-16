#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int fila = 5;
    int columna = 5;

    int valoresRamdom[fila][columna]=
    {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    int suma =0;
    int a = 0;

    srand(time(NULL));
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            valoresRamdom[i][j] = rand() % 99+1;
            cout << "[" << valoresRamdom[i][j] << "]" << " ";
            suma = suma + valoresRamdom[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "La suma de la matriz es de: " << suma;

    return 0;
}