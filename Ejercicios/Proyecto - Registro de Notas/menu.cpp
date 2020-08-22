#include <iostream>

using namespace std;

void menu() {	
	bool salir = false;
	
	while(salir == false) {
		int opcion;
		cout << "********ESCUELA PRIMARIA LA FORTALEZA********" << endl;
		cout << "********SISTEMA DE REGISTRO DE NOTAS*********" << endl;                                        
		cout << "***************MENU PRINCIPAL****************" << endl;
		cout << "*********************************************" << endl; 
		cout << endl;
		cout << "1 -> Registrar alumnos" << endl;
		cout << "2 -> Regsitro de calificaciones" << endl;
		cout << "3 -> Buscar alumnos" << endl;
		cout << "4 -> Imprimir notas" << endl;
		cout << "5 -> Estadisticas de matricula" << endl;
		cout << "6 -> Salir" << endl;
		cout << "*********************************************" << endl; 
		cout << endl;
		cout << endl;				
		cout << "Ingrese una opcion y presione enter: ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				//regAlumnos();
				break;	
			case 2:
				//regNotas();
				break;
			case 3:
				//buscar();
				break;
			case 4:
				//imprimir();
				break;	
			case 5:
				//estadistica();
				break;				
			case 6:
				salir = true;	
			default: 		
				break;
		}
		
		 system("CLS");		
	}
}
