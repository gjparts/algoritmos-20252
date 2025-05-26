#include<iostream>
using namespace std;

int main(){
	/*Arreglo o Array
	Es una estructura de datos estatica, secuencial y homogenea.
	Estatica: no puede cambiar su tamaño
	Secuencial: sus elementos se almacenan de forma consecutiva
	            en la memoria.
	Homogenea: todos sus elementos son del mismo tipo
	*/
	//como el array es secuencial necesita de espacio
	//en la memoria sin "estorbos", por lo tanto un arreglo
	//de 5 millones de elementos enteros probablemente
	//no se pueda crear y el programa va a crashear. 
	//int a[5000000];
	
	/*Existen dos formas de crear arreglos:
	1) crear un arreglo sin inicializar
	2) crear un arreglo prellenado (inicializado)*/
	
	//1) crear un arreglo sin inicializar
	//crea un arreglo de numeros enteros de 8 posiciones sin inicializar
	int arr1[8];
	//2) crear un arreglo prellenado (inicializado)
	int arr2[] = { 6, 777, 1, 789, 100, -9, 0, 12 };
	
	//un arreglo es una coleccion de apuntadores de memoria
	//si imprime un arreglo lo que obtendra es la direccion de memoria
	//del primer elemento del arreglo
	cout << "Direccion de memoria de arr1: " << arr1 << endl;
	cout << "Direccion de memoria de arr2: " << arr2 << endl;
	
	//imprimir los valores de un arreglo:
	//los arreglos numeran sus item de 0 a N-1 (zero indexing)
	cout << "Valores en arr1: ******************" << endl;
	for( int i = 0; i < 8; i++  )
		cout << arr1[i] << endl;
		
	/*observe que el for anterior imprime una serie de numeros sin sentido
	ya que al imprimir los valores de un arreglo sin inicializar probablemente
	los espacios de memoria asignados hallan quedado con basura de otro
	programa que no fue vaciada por el sistema operativo.*/
	//una posible solucion es, inicialice Usted los valores con ceros
	//usando un for:
	for( int i = 0; i < 8; i++  )
		arr1[i] = 0;
	cout << "Valores en arr1 luego de inicializar: ******************" << endl;
	for( int i = 0; i < 8; i++  )
		cout << arr1[i] << endl;
	
	//obtener en que direccion de memoria inicia y termina una variable
	cout << "arr2 inicia en " << begin(arr2) << endl;
	cout << "arr2 termina en " << end(arr2) << endl;
	/*Para poder usar begin y end debe de configurar el compilador en la version 11
	para ello se agrega el parametro: std=c++11 en la configuracion del compilador.*/
	
	//saber el tamaño de un arreglo:
	cout << "Tamanio de arr2: " << end(arr2)-begin(arr2) << endl;
	
	for( int i = 0; i < end(arr2)-begin(arr2); i++ )
		cout << arr2[i] << endl;
		
	//mas ejemplos:
	float arr3[] = {5.67, 1.24, 3.1416, 2.9};
	cout << "*******************************" << endl; 
	for( int i = 0; i < end(arr3)-begin(arr3); i++ )
		cout << arr3[i] << endl;
	
	//el resultado de restar end-begin se puede tambien almacenar en una variable int o long
	int tamanio3 = end(arr3)-begin(arr3);
	cout << "longitud de arr3: " << tamanio3 << endl;
	
	return 123;
}



