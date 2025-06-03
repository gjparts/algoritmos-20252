#include<iostream>
using namespace std;

int main(){
	//Arreglos de string
	//arreglo prellenado:
	string colores[] = {"rojo","verde","azul","blanco","gris"};
	//arreglo sin inicializar
	string frutas[5];
	
	//imprimir cada arreglo
	for( int i = 0; i < end(colores)-begin(colores); i++ )
		cout << colores[i] << endl;
	
	cout << "**********************" << endl;
	for( int i = 0; i < end(frutas)-begin(frutas); i++ )
		cout << frutas[i] << endl;
	
	//el arreglo colores es un arreglo de string unidimensional; pero como cada string
	//se puede manipular como arreglo da la impresion de que es un arreglo bidimensional;
	//pero no lo es.
	cout << "*************************" << endl;
	cout << "El tercer color es: " << colores[2] << endl;
	cout << "El cuarto caracter del primer color es: " << colores[0][3] << endl;
	cout << "El tercer caracter del cuarto color es: " << colores[3][2] << endl;
	//siempre puede manipular cada string con las funciones que ya conoce:
	cout << "La longitud del segundo color es: " << colores[1].length() << endl;
	cout << "La longitud del quinto color es: " << colores[4].length() << endl;
	//reemplazo de elementos:
	//cambiar azul por amarillo:
	cout << "tercer color antes del reemplazo: " << colores[2] << endl;
	colores[2] = "amarillo";
	cout << "tercer color despues del reemplazo: " << colores[2] << endl;
	
	//reemplazo de caracteres en string dentro del arreglo:
	//cambiar por una X el tercer caracter del cuarto color:
	cout << "cuarto color antes del reemplazo: " << colores[3] << endl;
	colores[3][2] = 'X';
	cout << "cuarto color despues del reemplazo: " << colores[3] << endl;
	
	//cambiar por un 4 el sexto caracter del tercer color:
	
	return 111;
}









