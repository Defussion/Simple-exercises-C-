#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "es_ES");
	int Opc, num, lim, oper;
	int max = 0, digit = 0, max2 = 0, camb = 0;
	do {
		cout << "Bienvenido a la Calculadora de las Tablas de Multiplicar" << endl;
		cout << "ELIGA EL MÉTODO POR EL CUAL DESEA OBTENER LAS TABLAS DE MULTIPLICAR:" << endl;
		cout << "-----------MENÚ--------------" << endl;
		cout << "1.Ciclo FOR" << endl;
		cout << "2.Ciclo WHILE" << endl;
		cout << "3.Ciclo DO-WHILE" << endl;
		cout << "4.Cambiar limite de ciclo WHILE y DO-WHILE"<<endl;
		cout << "PRESIONE 0 para terminar el proceso" << endl;
		cout << "-------------------------------" << endl;
		cin >> Opc;

		switch (Opc)
		{
		case 1:

			system("cls");
			cout << "INICIANDO PROCESO : FOR" << endl;
			cout << "Digite el número del cual desea la tabla de multiplicar" << endl;
			cin >> num;
			cout << "Ahora digite el limite de esta tabla" << endl;
			cin >> lim;
			for (int i = 0; i < lim; i = i + 1)
			{

				oper = num * i;
				cout << num << "x" << i << " = " << oper << endl;
			}
			
			break;
			
		case 2:
			system("cls");
			cout << "INICIANDO PROCESO : WHILE" << endl;

			cout << "Digite el número del cual desea una tabla de multiplicar" << endl;
			cin >> num;
			while (max < 10) {
				max++;
				oper = num * max;

				cout << num << "x" << max << "=" << oper << endl;

			}
			break;

		case 3:
			system("cls");
			cout << "INICIANDO PROCESO : DO-WHILE" << endl;
			cout << "Introduzca el digito del cual desea una tabla" << endl;
			cin >> digit;
			do
			{

				max2++;
				oper = digit * max;

				cout << digit << "x" << max2 << "=" << oper << endl;

			} while (max2 < 20);

			break;

		case 4:
			system("cls");
			cout << "1.Cambiar el limite del ciclo WHILE" << endl;
			cout << "2.Cambiar el limite del ciclo DO-WHILE" << endl;
			cin >> camb;
			switch (camb)
			{
			case 1:
				system("cls");
				cout << "INCIANDO PROCESO DE CAMBIO:WHILE" << endl;
				cout << "Digite el número del cual desea una tabla de multiplicar" << endl;
				cin >> num;
				cout << "Digite el limite de la tabla de multiplicar" << endl;
				cin >> lim;

				while (max <lim) {
					max++;
					oper = num * max;

					cout << num << "x" << max << "=" << oper << endl;

				
				}
				break;
			case 2:
				system("cls");
				cout << "INCIANDO PROCESO DE CAMBIO:DO-WHILE" << endl;
				cout << "Digite el número del cual desea una tabla de multiplicar" << endl;
				cin >> digit;
				cout << "Digite el limite de la tabla de multiplicar" << endl;
				cin >> lim;
				do
				{
					max2++;
					oper = digit * max2;

					cout << digit << "x" << max2 << "=" << oper << endl;

				} while (max2 < lim);
			
				break;
			}
	

		default:
			cout << "Proceso Terminado" << endl;
			break;
		}

	} while (Opc != 0);

	
	



	system("pause");
	return 0;	
}