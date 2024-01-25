#include <iostream>

using namespace std;
int aleatorio(){
	return rand() %100;
}
bool esImpar(int numero){
 return numero %2!=0;
}
int main(int argc, char *argv[]) {
	//En base a funciones imprimir N numeros impares. N=5
	int n,c=0, num;
	cout<<"generar N numero impares, ingrese n:";
	cin>>n;
	while(c<n)
	{
		num=aleatorio();
		if(esImpar(num));
		{
			c++;
			cout<<"impar["<<c<<"]:"<<num<<endl;
		}
	}

return 0;
}
