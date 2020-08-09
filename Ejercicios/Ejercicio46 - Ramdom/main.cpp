#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    //INICIALIZA NUMERO RAMDOM
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        //GENERA UN NUMERO ENTRE 1 Y 10
        numero = rand() % 10 + 1;

        cout << "Numero al azar: " << numero;
        cout << endl;
    }
    


   

    return 0;
}
