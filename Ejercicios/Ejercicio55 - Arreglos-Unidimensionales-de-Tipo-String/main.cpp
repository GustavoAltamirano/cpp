#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[] = {4, 5, 1};

    for (int i = 0; i < 3; i++)
    {
        cout << numeros[i] << endl;
    }
    
    string nombres[] = {"Juan", "Pedro", "Manuel", "Maria", "Jose"};

    for (int i = 0; i < 5; i++)
    {
        cout << nombres[i] << endl;
    }

    return 0;
}
