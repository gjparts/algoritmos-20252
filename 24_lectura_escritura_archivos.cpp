#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*Hacer un programa que muestre un menu:
	
	DIARIO
	1) Agregar entrada al diario
	2) Mostrar todo el diario
	3) Borrar todo el diario
	4) Salir
	Digitar la opcion deseada: 
		
	* el menu se volverá a mostrar hasta que el usuario seleccione la opcion de salir
	* en la opcion 1: preguntar al usuario el texto de la entrada se
	  escribirá al final del diario sin perder lo que ya habia en el archivo
	* en la opcion 2 imprimir el archivo de diario en pantalla hacer una pausa cada 10 lineas
	* en la opcion 3 se vaciara el archivo del diario dejandolo en blanco*/
	int opcion;
	do{
		system("cls");
		cout << "DIARIO" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Borrar todo el diario" << endl;
		cout << "4) Salir" << endl;
		cout << "Digitar la opcion deseada: ";
		cin >> opcion;
		//no se recomienda declarar variables dentro de una estructura switch
		fstream archivo;
		string linea;
		int renglon;
		switch(opcion){
			case 1:
				cout << "********************" << endl;
				cout << "Agregar entrada al diario" << endl;
				cout << "Digite el texto a ingresar: ";
				cin.ignore();
				getline(cin,linea);
				//escribir en el archivo
				archivo.open("notas.txt",ios::app);
				if( archivo.is_open() == true ){
					archivo << linea << endl;
					archivo.close();
				}
				else
					cout << "No tiene permiso de escritura." << endl;
			break;
			case 2:
				cout << "********************" << endl;
				cout << "Contenido del archivo:" << endl;
				archivo.open("notas.txt",ios::in);
				if( archivo.is_open() == true ){
					renglon = 1;
					while( archivo.eof() == false ){
						getline(archivo, linea);
						cout << renglon << ") " << linea << endl;
						if( renglon%10 == 0 ) system("pause");
						renglon++;
					}
					archivo.close();
				}
				else
					cout << "Archivo no existe o no tiene permiso." << endl;
			break;
			case 3:
				cout << "********************" << endl;
				cout << "Desea borrar el contenido del archivo de diario? (S/N) ";
				cin.ignore();
				getline(cin,linea);
				if( linea == "S" ){
					archivo.open("notas.txt",ios::out);
					archivo.close();
					cout << "SE HA BORRADO EL CONTENIDO DEL ARCHIVO!!!" << endl;
				}
				else
					cout << "No se ha borrado nada." << endl;
			break;
			case 4:
				cout << "Hasta luego." << endl;
			break;
			default:
				cout << "Opcion no valida." << endl;
		}
		system("pause");
	}while(opcion != 4);
	
	
	
	
	return 777;
}
