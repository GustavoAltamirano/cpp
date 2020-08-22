#include <iostream>
#include "acceso.h"
#include "mensajes.h"

using namespace std;

bool login() {
	string password;
	bool acceso = false;
	int intentos = 0;
	
	while (acceso == false) {
		system("cls");		
		mensajeBienvenido();
		
		if (intentos == 3) {
			cout << "Error al validar su contraseña." << endl;
			
			return false;
		}
	
		cout << "Ingrese su password: ";
		cin >> password;
		
		if (password == "admin") {
			acceso = true;
		}				
		
		intentos++;		
	}
	
	system("cls");
	
	return true;
}
