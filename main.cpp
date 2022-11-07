#include <iostream>

/* ESCRIBIR UN PROGRAMA QUE PIDA AL USUARIO INGRESAR DOS NUMEROS(FLOTANTES) Y QUE ESTE INDIQUE CUAL ES MAYOR */

using namespace std;
int main(int argc, char** argv) {
	float numero1, numero2;
	
	cout<<"MAYOR DE DOS DUMEROS INGRESADOS POR EL USUARIO"<<endl<<endl;
	cout<<"Numero 1: ";
	cin>>numero1;
	cout<<"Numero 2: ";
	cin>>numero2;
	
	cout<<endl<<"-----------------------------------------------"<<endl;
	cout<<"Los numeros ingresados son "<<numero1<<" y "<<numero2<<endl;
	
	if(numero1<numero2){
		cout<<"El numero mayor es el "<<numero2<<endl;
	}else if(numero1>numero2){
		cout<<"El numero mayor es el "<<numero1<<endl;
	}else{
		cout<<"Los numeros son iguales "<<endl;
	}
	cout<<endl<<endl;
	system("PAUSE");
	return 0;
}