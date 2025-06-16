#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*Haga un programa que lea el archivo ejemplo_24mil.txt y
	que copie todos los numeros encontrados en
	dicho archivo hacia un nuevo archivo llamado copia.txt
	En cada nueva ejecucion de programa debera
	borrar el contenido anterior de copia.txt*/
	fstream origen, destino;
	//abrir el archivo origen para lectura:
	origen.open("ejemplo_24mil.txt",ios::in);
	
	if( origen.is_open() == true ){
		//abrir el archivo de destino para escritura
		//out: para abrir el archivo borrando el contenido anterior
		destino.open("copia.txt",ios::out);
		if( destino.is_open() == true ){
			//recorrer el archivo de origen linea por linea
			//y solo se copia al archivo destino los numeros encontrados
			string linea;
			while( origen.eof() == false ){
				getline(origen,linea);
				//escribir en destino solo numeros
				try{
					double numero = stod(linea);
					destino << numero << endl; //si esto tiene exito se escribe
				}catch(exception ex){}
			}
		}
		else
			cout << "Archivo de destino no tiene permiso de escritura." << endl;
	}
	else
		cout << "Archivo de origen no existe o no tiene permiso." << endl;
	
	return 123;
}
