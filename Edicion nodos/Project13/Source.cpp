#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
};
void menu();
Nodo *crearnodo(int);
void insertarnodo(Nodo *&, int);
void insertarnodo2(Nodo *&, int);
void mostrar(Nodo *, int);
void mostrar2(Nodo *, int);
bool busqueda(Nodo*, int);
bool comparar(int n);
void orden(Nodo *);

Nodo *arbol = NULL;
Nodo *arbol2 = NULL;
int main() {

	menu();


	return 0;
	system("pause");

}


void menu() {
	int dato, opc, contador = 0;
	do
	{
		cout << "\t.:MENU:." << endl;
		cout << "1.Insertar nodos" << endl;
		cout << "2. Mostrar arbol completo" << endl;
		cout << "3.Insertar nodos" << endl;
		cout << "4. Mostrar arbol completo" << endl;
		cout << "5. Buscar un elemento en el arbol" << endl;
		cout << "6.Recorrer el arbor en PreOrden" << endl;
		cout << "7.Confirmar si los arboles introducidos, representan los mismos elementos" << endl;
		cout << "8.Salir" << endl;
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
		case 2:cout << "\nMostrando el arbol completo:\n";
			mostrar(arbol, contador);
			cout << "\n";
			system("pause");
			break;
		case 3:cout << "Digite un numero entero: ";
			cin >> dato;
			insertarnodo(arbol2, dato);
			cout << "\n";
			system("pause");
			break;
		case 4:cout << "\nMostrando el arbol completo:\n";
			mostrar(arbol2, contador);
			cout << "\n";
			system("pause");
			break;
		case 5:
			cout << "\nDigite el elemento a buscar " << endl;
			cin >> dato;
			if (busqueda(arbol, dato) == true) {
				cout << "Elemento: " << dato << " A sido encontrado en el arbol" << endl;
			}
			else {
				cout << "Elemento no encontrado" << endl;
			}
			cout << "\n";
			system("pause");
			break;
		case 6:cout << "\nRecorrido en PreOrden: " << endl;
			orden(arbol);
			cout << "\n";
			system("pause");
		case 7:
			cout << "Arboles Comparados" << endl;
			if (comparar(dato)==true) {
				cout << "Los arboles tienen mismos elementos" << endl;
			}
			else {
				cout << "Los arboles NO tienen los mismos elementos" << endl;
			}
			cout << "\n";
			system("pause");
			break;

		}system("cls");


	} while (opc != 8);


}
Nodo *crearnodo(int n) {
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;

	return nuevo_nodo;

}
//Funcion para insertar nodo.
void insertarnodo(Nodo *&arbol, int n) {

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
void insertarnodo2(Nodo *&arbol, int n) {

	if (arbol == NULL) {
		Nodo *nuevo_nodo = crearnodo(n);
		arbol2 = nuevo_nodo;
	}
	else {
		int vr = arbol2->dato;
		if (n < vr) {
			insertarnodo2(arbol2->izq, n);
		}
		else {
			insertarnodo2(arbol2->der, n);
		}

	}

}
//Funcion para mostrar arbol.
void mostrar(Nodo *arbol, int cont) {
	if (arbol == NULL) {
		return;

	}
	else {

		mostrar(arbol->der, cont + 1);
		for (int i = 0; i < cont; i++) {

			cout << "   ";
		}
		cout << arbol->dato << endl;
		mostrar(arbol->izq, cont + 1);
	}
}
void mostrar2(Nodo *arbol2, int cont) {
	if (arbol2 == NULL) {
		return;

	}
	else {

		mostrar2(arbol2->der, cont + 1);
		for (int i = 0; i < cont; i++) {

			cout << "   ";
		}
		cout << arbol2->dato << endl;
		mostrar2(arbol2->izq, cont + 1);
	}
}
//Funcion para buscar un elemento del arbol
bool busqueda(Nodo *arbol, int n) {
	if (arbol == NULL) {
		return false;
	}
	else if (arbol->dato == n) {
		return true;
	}
	else if (n < arbol->dato) {
		return busqueda(arbol->izq, n);

	}
	else {
		return busqueda(arbol->der, n);
	}

}
//Funcion para recorrido en PreOrden, ojala este bien alv
void orden(Nodo *arbol) {
	if (arbol == NULL) {
		return;
	}
	else {
		cout << arbol->dato << " - ";
		orden(arbol->izq);
		orden(arbol->der);
	}

}
//Comparacion de arboles
bool comparar(int n) {
	if (arbol->dato==n && arbol2->dato==n) {
	
		return true;
	}
	else {
		return false;
	}


}