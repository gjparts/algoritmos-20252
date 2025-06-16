#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream archivo;
	
	//abrir el archivo en modo de escritura
	//si dicho archibo no existe, el programa lo crea automaticamente
	archivo.open("archivoprueba.txt", ios::app );
	/*
	ios::out	sobreescribe el archivo borrando el contenido anterior OUTPUT
	ios::app	agrega contenido al final del archivo APPEND
	*/
	//validar si el archivo se puede escribir
	if( archivo.is_open() == true ){
		cout << "Archivo se pudo abrir" << endl;
		//escribir informacion dentro del archivo
		archivo << "Gerardo Portillo" << endl;
		archivo << 4+5 << endl;
		int x = 67;
		archivo << "El valor de x es " << x << endl;
		archivo << "Uva\tNaranja\tSandia\tMelon" << endl;
		
		archivo.close(); //cierre el archivo
		cout << "Fin del programa" << endl;
	}
	else
		cout << "No se puede escribir el archivo, quiza no tiene permiso." << endl;
	
	return 456;
}
