#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Ingrese A:";
    cin >> a;
    cout << endl;

    cout << "Ingrese B:";
    cin >> b;
    cout << endl;

    cout << "Ingrese C:";
    cin >> c;
    cout << endl;

    if (a > b){
        if (a > c){
            cout << "A es el mayor";
        }else{
            cout << "C es el mayor";
        }
    }else{
        if (b > c){
            cout << "B es el mayor";
        }else{
            cout << "C es el mayor";
        }  
    }
    
    return 0;
}
