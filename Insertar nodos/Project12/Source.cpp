#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo*der;
	Nodo *izq;
};
void menu();
Nodo *crearnodo(int);
void insertarnodo(Nodo *&, int);
Nodo *arbol = NULL;
int main() {


	return 0;
	system("pause");

}
void menu() {
	int dato, opc;
	do
	{
		cout << "\t.:MENU:." << endl;
		cout << "1.Insertar nodos" << endl;
		cout << "2.Salir" << endl;
		cout << "opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:cout << "Digite un numero entero: ";
			cin >> dato;
			insertarnodo(arbol, dato);
			cout << "\n";
			system("pause");
			break;
		}
		system("cls");
	} while (opc !=2);


}
Nodo *crearnodo(int n) {
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->dato = NULL;
	nuevo_nodo->izq = NULL;

	return nuevo_nodo;
}
void insertarnodo(Nodo *&, int n) {

	if (arbol == NULL) {
		Nodo *nuevo_nodo = crearnodo(n);
		arbol = nuevo_nodo;
	}
	else {
		int vr = arbol->dato;
		if (n < vr) {
			insertarnodo(arbol->izq, n);
		}
		else {
			insertarnodo(arbol->der, n);
		}

	}
}

