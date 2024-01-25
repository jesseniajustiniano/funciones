#include <iostream>
//REALIZAR UN MENU 3 OPCIONES
//1 INGRESAR NUMERO 
//2 SUMAR LOS NUMEROS 
//3 VERIFICAR SI UN NUMERO ES PRIMO 
// TODO CON FUNCION PARAMETROS POR REFERENCIA
using namespace std;

// Funci�n para ingresar un n�mero
void ingresarNumero(int& numero) {
	cout << "Ingrese un n�mero: ";
	cin >> numero;
}

// Funci�n para sumar dos n�meros
void sumarNumeros(int& numero1, int& numero2) {
	int suma = numero1 + numero2;
	cout << "La suma de los n�meros es: " << suma << endl;
}

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int numero) {
	if (numero <= 1) {
		return false;
	}
	
	for (int i = 2; i * i <= numero; i++) {
		if (numero % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main() {
	int opcion, numero1, numero2;
	
	do {
		// Mostrar el men�
		cout <<"Menu"<<endl;
		cout << "1. Ingresar n�mero" << endl;
		cout << "2. Sumar n�meros" << endl;
		cout << "3. Verificar si un n�mero es primo" << endl;
		cout << "0. Salir" << endl;
		cout << "Ingrese una opci�n: ";
		cin >> opcion;
		
		// Procesar la opci�n seleccionada
		switch (opcion) {
		case 1:
			ingresarNumero(numero1);
			break;
		case 2:
			ingresarNumero(numero1);
			ingresarNumero(numero2);
			sumarNumeros(numero1, numero2);
			break;
		case 3:
			ingresarNumero(numero1);
			if (esPrimo(numero1)) {
				cout << "El n�mero es primo." << endl;
			} else {
				cout << "El n�mero no es primo." << endl;
			}
			break;
		case 0:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opci�n inv�lida." << endl;
			break;
		}
	} while (opcion != 0);
	
	return 0;
}

