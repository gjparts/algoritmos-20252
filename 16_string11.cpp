#include<iostream>
using namespace std;

int main(){
	/*Hacer un arreglo de string que tenga las frutas siguientes:

	Fresa, Naranja, Manzana, Uva, Pera, Melon, Kiwi, Mandarina
	
	Luego haga una rutina que altere o modifique cada fruta
	agregando un guion bajo entre cada uno de los caracteres de cada fruta.
	
	Por ultimo imprimir el arreglo de frutas.*/
	
	string frutas[] = {"Fresa", "Naranja", "Manzana", "Uva", "Pera", "Melon", "Kiwi", "Mandarina"};
	
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		//variable temporal para ir copiando la fruta actual char por char
		string copia = "";
		//recorrer la fruta actual char por char
		for( int j = 0; j < frutas[i].length(); j++ ){
			copia = copia+frutas[i][j]+"_";
		}
		//reemplazar la fruta actual por la copia
		frutas[i] = copia;
		//imprimir la fruta actual
		cout << frutas[i] << endl;
	}
	
	return 123;
}
