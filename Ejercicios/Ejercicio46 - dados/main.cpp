#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;

    srand(time(0));
    a = rand() % 6+1;
    b = rand() % 6+1;
    cout << "Dado 1: " << a << endl;
    cout << "Dado 2: " << b << endl;
    cout << "-----------------" << endl;
    cout << "Resultado: " << a + b;

    cout << endl;
    
    return 0;
}
