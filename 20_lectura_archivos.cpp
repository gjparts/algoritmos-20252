#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream archivo; //estructura de datos para leer archivos
	
	//abrir el archivo de texto para su lectura:
	//ruta absoluta: el archivo siempre va a estar en un folder especifico
	//archivo.open("C:\\Windows\\win.ini", ios::in);
	
	//ruta relativa (archivo a abrir esta en el mismo folder del programa)
	archivo.open("ejemplo_24mil.txt", ios::in);
	
	//verificacion de si el archivo ha sido abierto
	 if( archivo.is_open() == true ){
	 	cout << "Archivo abierto" << endl;
	 	
	 	//recorrer el archivo linea por linea
	 	string linea; //variable temporal
	 	int contador = 0; //variable acumulador
	 	while( archivo.eof() == false ){
	 		//eof = end of file
	 		//leer una linea del archivo y ponerla en una variable
	 		getline(archivo,linea);
	 		contador++; //sumar 1 al contador
	 		cout << linea << endl; //si imprime cada linea leida el recorrido sera lento
		 }
		 cout << "Se ha terminado de leer el archivo." << endl;
		 cout << "Se ha leido " << contador << " lineas" << endl;
	 	
		archivo.close(); //cerrar el archivo al terminar
	 }
	 else
	 	cout << "Archivo no existe o no tiene permiso." << endl;
	
	
	return 678;
}





