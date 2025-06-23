/*Funciones sin prototipado
Consiste en declarar e implementar las funciones
antes que main()*/
#include<iostream>
using namespace std;

//implementacion de funciones
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

int main(){
	/*Sobrecarga de funciones o metodos: (function overload, method overload)
	son funciones que se llaman igual; pero tienen diferentes firmas.*/
	cout << sumar(1,3) << endl;
	cout << sumar(2,5,7) << endl;
	cout << sumar(4.5f,2.4f) << endl;
	cout << restar(3.2,1.1) << endl;
	
	return 777;
}
