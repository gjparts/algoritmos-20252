#include<iostream>
using namespace std;

int main(){
	//leer datos de la consola para guardarlos en una variable string
	string nombre;
	/*
	cout << "Digite su nombre completo: ";
	cin >> nombre;
	cout << "Usted se llama " << nombre << endl;
	*/
	//lo anterior no es practico para leer string porque si encuentra un espacio
	//en blanco; entonces ignora a partir de ahi el string leido.
	//ya que cin esta diseñado para depositar en diferentes variables cada uno de los
	//valores separados por espacios.
	
	//solucion: use la funcion getline
	cout << "Digite su nombre completo: ";
	getline(cin,nombre);
	cout << "Usted se llama " << nombre << endl;
	/*donde:
	cin 	es el inputstream o flujo de entrada
	nombre	es la variable de destino*/
	
	
	return 111;
}
