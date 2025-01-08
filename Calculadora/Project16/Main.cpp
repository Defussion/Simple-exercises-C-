#include <iostream>
#include "CCalculadora.h"
using namespace std;

int main() {
	int opc, a = 0, b = 0;

	int opcrest, opcmult, opcdiv;
	float ad=0,bd=0, c;
	CCalculadora casio;

	do {
		cout << "-------MENU---------" << endl;
		cout << "- Eliga la operacion a realziar- " << endl;
		cout << "1. SUMAR" << endl;
		cout << "2.RESTAR" << endl;
		cout << "3.MULTIPLCACION" << endl;
		cout << "4.DIVISION" << endl;
		cout << "0.TERMINAR" << endl;
		cin >> opc;

		switch (opc)
		{
		case 1:
			system("cls");
			cout << "Digite el primer numero" << endl;
			cin >> a;
			cout << "Digite el primer numero" << endl;
			cin >> b;
			cout << "El resultado es: " << casio.sumar(a, b) << endl;
			break;
		case 2:
			system("cls");
			cout << "Desea calcular la restas con los digitos anteriores" << endl;
			cout << "1.SI/ 2.NO(Eliga esta opcion si es la primera operacion a realizar)" << endl;
			cin >> opcrest;
			if (opcrest == 1)
			{
				system("cls");
				cout << "El resultado es: " << casio.restar(a, b) << endl;
				break;
			}
			else if (opcrest == 2) {
				system("cls");
				cout << "Digite el minuendo" << endl;
				cin >> a;
				cout << "Digite el sustraendo" << endl;
				cin >> b;
				cout << "El resultado es: " << casio.restar(a, b) << endl;
				break;
			}
		case 3:
			system("cls");
			cout << "Desea calcular la restas con los digitos anteriores" << endl;
			cout << "1.SI/ 2.NO(Eliga esta opcion si es la primera operacion a realizar)" << endl;
			cin >> opcmult;
			if (opcmult == 1)
			{
				system("cls");
				cout << "El resultado es: " << casio.multiplicar(a, b) << endl;
				break;
			}
			else if (opcmult == 2) {
				system("cls");
				cout << "Digite el primer numero" << endl;
				cin >> a;
				cout << "Digite el segundo numero" << endl;
				cin >> b;
				cout << "El resultado es: " << casio.multiplicar(a, b) << endl;
				break;
			}
		case 4:
			system("cls");
			cout << "Desea calcular la restas con los digitos anteriores" << endl;
			cout << "1.SI/ 2.NO(Eliga esta opcion si es la primera operacion a realizar)" << endl;
			cin >> opcdiv;
			if (opcdiv == 1)
			{
				system("cls");
				cout << "El resultado es: ";
				casio.dividir(a,b);
				break;
			}
			else if (opcdiv == 2) {
				system("cls");
				cout << "Digite el dividendo" << endl;
				cin >> ad;
				cout << "Digite el divisor" << endl;
				cin >> bd;
				casio.dividir(ad,bd);


			}
			break;
		}

	} while (opc != 0);

			system("pause");
			return 0;

   }
	

		
