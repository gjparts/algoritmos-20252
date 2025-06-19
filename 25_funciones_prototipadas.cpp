/*funciones: son subprogramas (macros) que
se pueden reutilizar.
-> algunas funciones retornan un valor/objeto/estructura
-> algunas funciones pueden no retornar algo (void)

En c++ existe varias formas de trabajar con funciones:
1) por prototipado de funciones
2) sin prototipado de funciones
3) a traves de un archivo externo

Prototipado de funciones:
Consiste en que debe declararse las firmas de las funciones
antes de main() y debe implementarse el codigo de la funciones
despues de main().
*/

#include<iostream>
using namespace std;

//prototipos de funcion (firmas o signature)
int sumar(int a, int b);
int sumar(int a, int b, int c);
float sumar(float a, float b);
double restar(double a, double b);
//el prototipado era muy util antes de los 90s para evitar tener que recorrer el codigo para llegar a main

int main(){
	/*Sobrecarga de funciones o metodos: (function overload, method overload)
	son funciones que se llaman igual; pero tienen diferentes firmas.*/
	cout << sumar(1,3) << endl;
	cout << sumar(2,5,7) << endl;
	cout << sumar(4.5f,2.4f) << endl;
	cout << restar(3.2,1.1) << endl;
	
	return 777;
}

//implementacion de los prototipos de funcion
int sumar(int a, int b){
	return a+b;
}
int sumar(int a, int b, int c){
	return a+b+c;
}
float sumar(float a, float b){
	return a+b;
}
double restar(double a, double b){
	return a-b;
}

