#include<iostream>
using namespace std;

int main(){
	/*funcion find()
	permite buscar un string dentro de otro string.
	la funcion devuelve la posicion de la primera coincidencia
	encontrada a partir de donde se inicia la busqueda.*/
	string texto = "El tiempo transcurre inexorable ante atardeceres que no tienen fin.";
	cout << texto << endl;
	
	string buscar;
	cout << "Digite lo que desea buscar en el texto anterior: ";
	getline(cin,buscar);
	
	int posicion;
	posicion = texto.find(buscar,0);
	/*donde:
		texto	es el string donde vamos a hacer la busqueda
		buscar	es el string que vamos a buscar
		0		es la posicion desde donde vamos a comenzar a buscar
	si find() retorna -1 quiere decir que no encontro coincidencia.
	find() retorna un valor entero.
	find() no ignora mayusculas/minusculas*/
	
	if(posicion == -1)
		cout << "No encontrado";
	else
		cout << "Encontrado en la posicion " << posicion;
	
	cout << endl;
	return 777;
}
