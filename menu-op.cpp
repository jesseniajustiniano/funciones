#include <iostream>
//REALIZAR UN MENU 3 OPCIONES
//1 INGRESAR NUMERO 
//2 SUMAR LOS NUMEROS 
//3 VERIFICAR SI UN NUMERO ES PRIMO 
// TODO CON FUNCION PARAMETROS POR REFERENCIA
using namespace std;

// Función para ingresar un número
void ingresarNumero(int& numero) {
	cout << "Ingrese un número: ";
	cin >> numero;
}

// Función para sumar dos números
void sumarNumeros(int& numero1, int& numero2) {
	int suma = numero1 + numero2;
	cout << "La suma de los números es: " << suma << endl;
}

// Función para verificar si un número es primo
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
		// Mostrar el menú
		cout <<"Menu"<<endl;
		cout << "1. Ingresar número" << endl;
		cout << "2. Sumar números" << endl;
		cout << "3. Verificar si un número es primo" << endl;
		cout << "0. Salir" << endl;
		cout << "Ingrese una opción: ";
		cin >> opcion;
		
		// Procesar la opción seleccionada
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
				cout << "El número es primo." << endl;
			} else {
				cout << "El número no es primo." << endl;
			}
			break;
		case 0:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opción inválida." << endl;
			break;
		}
	} while (opcion != 0);
	
	return 0;
}

