#include <iostream>
using namespace std;

	struct Nodo { int dato; Nodo* siguiente; };
	
	int main (){
		//Se crean 3 variebles de tipo entero para almacenar el valor ingresado por el usuario
		int unoD;
		int dosD;
		int tresD;
		
		// Se crean dinamicamente con NEW 3 nodos llamdaos uno, dos y tres para indentificarlos facilmente
		Nodo* uno = new Nodo ();
		Nodo* dos = new Nodo ();
		Nodo* tres = new Nodo ();
		
		//Se solicita al usuario que ingrese el valor para cada nodo
	
		cout << "Ingrese el valor numerico para el nodo uno: " << endl;
		cin >> unoD;
		
		//Se indica que el dato que contiene en nodo uno es la variable unoD la cual contiene el valor ingresado por el usuario
		uno->dato = unoD;
		
		cout << "Ingrese el valor numerico para el nodo dos: " << endl;
		cin >> dosD;
		
		dos->dato = dosD; 
		
		cout << "Ingrese el valor numerico para el nodo tres: " << endl;
		cin >> tresD;
		
		tres->dato = tresD;
		
		uno -> siguiente = dos;
		
		dos -> siguiente = tres;
		
		tres -> siguiente = nullptr;
		
		cout << "\n Estudiante: Javier David Rodriguez Rosales" << endl;
		
		//Se imprime en consola los datos almacenados en cada nodo
			cout << "\n Datos almacenados en nodos:" << endl;
		Nodo* actual = uno;
    while (actual != nullptr) {
    	cout << " " << endl;
        cout << actual->dato << endl;

        actual = actual->siguiente; 
        
}
	//Se realiza la linpieza de los nodos para no afectar la memoria
 		Nodo* actual2 = uno;
		
		while (actual2 != nullptr) {
        Nodo* temp = actual2;
        actual2 = actual2->siguiente;
        delete temp;
    }
		
	}