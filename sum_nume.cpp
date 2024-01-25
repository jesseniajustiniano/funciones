#include <iostream>
using namespace std;
//REALIZAR UN MENU 3 OPCIONES
//1 INGRESAR NUMERO 
//2 SUMAR LOS NUMEROS 
//3 VERIFICAR SI UN NUMERO ES PRIMO 
// TODO CON FUNCION PARAMETROS POR REFERENCIA
void ingresar(int &n1, int &n2)
{
	cout<<"ingrese un numero: ";
	cin>>n1;
	cout<<"ingrese otro numero: ";
	cin>>n2;
}
void sumar(int n1, int n2, int &resultado)
{
	resultado=n1+n2;
}
int main(int argc, char *argv[]) {
	int n1,n2,resultado;
	ingresar(n1,n2);
	sumar(n1,n2,resultado);
	cout<<"La suma es:"<<resultado<<endl;
	
	return 0;
}

