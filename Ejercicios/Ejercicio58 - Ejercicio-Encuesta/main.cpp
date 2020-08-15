#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string alumnos[3];
    string encuesta[3][2]=
    {
        {"Matriculara clases en el siguiente periodo?", ""},
        {"Matriculara L2?", ""},
        {"Matriculara L2 con el Lic. Bily?", ""}
    };
    int respuestas[3] = {0, 0, 0};

    cout << "Conteste la encuesta con s o n" << endl;
    cout << "------------------------------";
    cout << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese su nombre: ";
        cin >> alumnos[i];

        for (int j = 0; j < 3; j++)
        {
            cout << encuesta[j][0] << ": ";
            cin >> encuesta[j][1];

            if (encuesta[j][1] == "s")
            {
                respuestas[j]++;
            }
            
        }
        cout << endl;
    }
    cout << "Resumen" << endl;
    cout << "-------" << endl;
    cout << "Respuestas pregunta 1: " << respuestas[0] << endl;
    cout << "Respuestas pregunta 2: " << respuestas[1] << endl;
    cout << "Respuestas pregunta 3: " << respuestas[2] << endl;

    return 0;
}
