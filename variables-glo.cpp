#include <iostream>
using namespace std;
//DECLARACION DE VARIABLES GLOBALES
int n1,n2;

int sumar()
{
	return n1+n2;
}

int multiplicar()
{
	return n1*n2;
}
//REALIZAR UNA FUNCION BOOLEANA PARA RECIBIR UN PARAMETRO Y DETERMINAR
//SI ES PAR TRUE O IMPAR FALSE.
bool esPar(int numero) {
	if  (numero % 2 == 0){
		return true;
	}else{
		return false;
	}
}

void ingresar()
{
	cout <<"Ingresar el primer numero:";
	cin>>n1;
	cout <<"Ingresar el segundo numero:";
	cin>>n2;
}
int main(int argc, char *argv[]) {
	ingresar();
	cout<<"Suma de los numeros es: "<<sumar()<<endl;
	cout<<"Multiplicacion de los numeros es: "<<multiplicar()<<endl;
	
	//Solicitar al usuario ingresar un numero 
	int numero;
	cout <<"Ingresar un numero entero: ";
	cin>> numero;
	
	if (esPar(numero)){
		cout<<"El numero es par"<<endl;
	}else{
		cout<<"El numero es impar"<<endl;
	}
	return 0;
	
}

