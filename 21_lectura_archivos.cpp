#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*Haga un programa que lea el archivo ejemplo_24mil.txt,
	debera recorrerlo, al finalizar debe imprimir
	cuantas lineas tiene, cual es la suma de todos
	los numeros encontrados, cuantos numeros son
	pares y cuantos numeros son impares asi como
	el promedio de todos sus numeros.
	-> No debe imprimir cada linea.*/
	fstream archivo;
	
	archivo.open("ejemplo_24mil.txt", ios::in);
	
	if( archivo.is_open() == true ){
		string linea; ////variable temporal
		int lineas = 0; //contador de lineas
		int suma = 0; //acumulador de numeros
		int pares = 0, impares = 0; //variables contador
		while( archivo.eof() == false ){
			//leer cada linea y avanzar dentro del archivo
			getline(archivo,linea);
			lineas++; //contar una linea mas
			
			try{
				//tratar de convertir la linea leida a numero
				suma += stoi(linea);
				
				if( stoi(linea)%2 == 0 )
					pares++;
				else
					impares++;
					
			}catch(exception ex){}
		}
		cout << "Lineas leidas: " << lineas << endl;
		cout << "Suma de los numeros encontrados: " << suma << endl;
		cout << "Pares: " << pares << endl;
		cout << "Impares: " << impares << endl;
		cout << "Promedio: " << suma/(pares+impares) << endl;
		
		archivo.close(); //cerrar el archivo
	}
	else
		cout << "El archivo no existe o no tiene permiso." << endl;
	
	return 77;
}
