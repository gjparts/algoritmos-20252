#include<iostream>
#include "funciones.h" //si el archivo a incluir esta 
                       //en un folder determinado se usa comillas dobles
using namespace std;

int main(){
	/*Sobrecarga de funciones o metodos: (function overload, method overload)
	son funciones que se llaman igual; pero tienen diferentes firmas.*/
	cout << sumar(1,3) << endl;
	cout << sumar(2,5,7) << endl;
	cout << sumar(4.5f,2.4f) << endl;
	cout << restar(3.2,1.1) << endl;
	
	return 777;
}
