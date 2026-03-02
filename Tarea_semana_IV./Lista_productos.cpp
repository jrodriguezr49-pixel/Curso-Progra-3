#include <iostream>
using namespace std;

struct Producto{
	int codigo;
	string nombre;
	double precio;
	
};

struct Nodo{
	Producto data;
	Nodo* siguiente;
};

int main (){
	int cod;
	string nom;
	double prec;
	double total=0;
	cout << "Javier David Rodriguez Rosales " << endl;
	
	Nodo* primero = new Nodo;
			cout << "Ingrese el codigo del producto: ";
			cin >> cod;
	primero -> data.codigo = cod;
			cout << "Ingrese el nombre del producto: ";
			cin >> nom;
	primero -> data.nombre = nom;
			cout << "Ingrese el precio del producto: " ;
			cin >> prec;
	primero -> data.precio = prec;
	
	primero -> siguiente = nullptr;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	Nodo* segundo = new Nodo;
			cout << "\nIngrese el codigo del producto: " << endl;
			cin >> cod;
	segundo -> data.codigo = cod;
			cout << "Ingrese el nombre del producto: " << endl;
			cin >> nom;
	segundo -> data.nombre = nom;
			cout << "Ingrese el precio del producto: " << endl;
			cin >> prec;
	segundo -> data.precio = prec;
	
	segundo -> siguiente = nullptr;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	primero -> siguiente = segundo;

	Nodo* tercero = new Nodo;
			cout << "\nIngrese el codigo del producto: " << endl;
			cin >> cod;
	tercero -> data.codigo = cod;
			cout << "Ingrese el nombre del producto: " << endl;
			cin >> nom;
	tercero -> data.nombre = nom;
			cout << "Ingrese el precio del producto: " << endl;
			cin >> prec;
	tercero -> data.precio = prec;
	
	tercero -> siguiente = nullptr;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	segundo -> siguiente = tercero;
	
	Nodo* cuarto = new Nodo;
			cout << "\nIngrese el codigo del producto: " << endl;
			cin >> cod;
	cuarto -> data.codigo = cod;
			cout << "Ingrese el nombre del producto: " << endl;
			cin >> nom;
	cuarto -> data.nombre = nom;
			cout << "Ingrese el precio del producto: " << endl;
			cin >> prec;
	cuarto -> data.precio = prec;
	
	cuarto -> siguiente = nullptr;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	tercero -> siguiente = cuarto;
	
	Nodo* actual = primero;
    while (actual != nullptr) {
    	cout << " " << endl;
        cout << "Codigo: " << actual->data.codigo << endl;
        cout << " Nombre: " << actual->data.nombre << endl;
        cout << " Precio: " << actual->data.precio << endl;
        
        total += actual->data.precio;

        actual = actual->siguiente;
        
        
}
	cout << "\nTotal acumulado: Q" << total << endl;
	actual = primero;

    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
    primero = nullptr;

    return 0;
				
}