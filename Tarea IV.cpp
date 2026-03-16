#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* head = NULL;
    Nodo* actual = NULL;

    int valor;
    char opcion='s';
    
    int contador=0;
    int suma =0;

    while(opcion == 's') {
        cout << "Ingrese valor: ";
        cin >> valor;

        Nodo* nuevo = new Nodo;
        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        if(head == NULL) {
            head = nuevo;
            actual = nuevo;
        } else {
            actual->siguiente = nuevo;
            actual = nuevo;
        }
        contador++;
        suma += valor;
        cout << "Desea ingresar otro numero?  (s/n) " ;
        cin >> opcion;
        
    }
    cout << "\nLista generada:\n";

    Nodo* temp = head;
    while(temp != NULL) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }
    cout << "NULL";
    float promedio = 0;

    if(contador > 0){
        promedio = (float)suma / contador;
    }

    cout << "\nCantidad de nodos: " << contador << endl;
    cout << "Suma de valores: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    
    cout << "Javier David Rodriguez Rosales";

    return 0;
}