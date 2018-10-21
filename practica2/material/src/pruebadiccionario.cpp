#include "Diccionario.h"
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char * argv[]){

  if (argc!=2){
      cout<<"Dime el nombre del fichero con el diccionario"<<endl;
      return 0;
   }

   ifstream f (argv[1]);
   if (!f){
    cout<<"No puedo abrir el fichero "<<argv[1]<<endl;
    return 0;
   }
   


   Diccionario mi_diccionario;
   f>>mi_diccionario; //Cargamos en memoria el diccionario

	cout << endl << "Diccionario cargado correctamente en memoria." << endl;
   
   /* Exhibir aqui la funcionalidad programada para el TDA Diccionario / TDA Termino  
    Algunas sugerencias: 
    - Obtener las definiciones asociadas a una palabra   
    - Obtener el (sub)diccionario de términos comprendidos en [caracter_inicial, caracter_final]
    - Obtener el (sub)diccionario de términos asociados a una palabra clave. Ejemplo: el diccionario de terminos asociados a "color"   
    - Obtener el numero total de definiciones, el maximo de definiciones asociadas a una unica palabra y el promedio de definiciones por palabra
    - Cualquier otra funcionalidad que considereis de interes 
   */

  	cout << endl << "Numero de definiciones totales: "
	             << mi_diccionario.getNumDefiniciones() << endl;

	string palabra;

	cout << "Introduce una palabra:";
	cin >> palabra;

	Vector_Dinamico<string> def;
	def = mi_diccionario.getDefiniciones(palabra);

	cout << endl << palabra << ": " << endl;
	for (int i = 0 ; i < def.size();i++){
		cout << "\t" << def[i] << endl;

	}

}
