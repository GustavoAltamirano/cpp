#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 10;
    int c = 4;

    if (a > b || a > c)
    {
        cout << "a es mayor que b o mayor que c";
    }

    while (a > b)
    {
        a--;

        if (a == 20)
        {
            break;
        }
    }
    

    return 0;
}