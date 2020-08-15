#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombre[3][2];

    nombre[0][0] = "Juan";
    nombre[0][1] = "Perez";

    nombre[1][0] = "Gustavo";
    nombre[1][1] = "Altamirano";

    nombre[2][0] = "Manuel";
    nombre[2][1] = "Martinez";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << nombre[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
