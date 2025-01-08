#include <iostream>
using namespace std;
void octaldecimal();
void binario(int b);
void octal(int o);
void hexadecimal(int h);
void decimalbinario();
int exponente, num;
int octales;
double binarios, decimal;
int n, aux, i = 0;
int VH[10];

int main() {
	int opc = 0;
	while (opc != 7)
	{
		cout << "MENU" << endl;
		cout << "1- DECIMAL A BINARIO" << endl;
		cout << "2- BINARIO A DECIMAL" << endl;
		cout << "3- DECIMAL A OCTAL" << endl;
		cout << "4- OCTAL A DECIMAL" << endl;
		cout << "5- DECIMAL A HEXADECIMAL" << endl;
		cout << "6- HEXAGECIMAL A DECIMAL" << endl;
		cout << "7- SALIR" << endl;
		cout << endl;
		cout << "ELIJA UNA OPCION" << endl;
		cin >> opc;

		switch (opc)
		{
		case 1:
			cout << "DIGITE EL NUMERO A CONVERTIR" << endl;
			cout << "SOLO NUMEROS POSITIVOS" << endl;
			cin >> n;
			if (n > 0) {
				binario(n);
				cout << endl;
			}
			else {
				cout << "EL PROGRAMA NO PUEDE PROCESAR EL NUMERO NEGATIVO, POR LO CUAL SE CERRARA" << endl;
			}
			
			break;
		case 2:cout << "DIGITE EL NUMERO A CONVERTIR" << endl;
			cin >> binarios;
			exponente = 0;
			decimal = 0;
			decimalbinario();
			

			break;
		case 3:
			cout << "DIGITE EL NUMERO A CONVERTIR" << endl;
			cout << "SOLO NUMEROS POSITIVOS" << endl;
			cin >> n;
			if (n > 0) {
				octal(n);
				cout << endl;
			}
			else {
				cout << "EL PROGRAMA NO PUEDE PROCESAR EL NUMERO NEGATIVO, POR LO CUAL SE CERRARA" << endl;
			}
			
			break;
		case 4:
			cout << "DIGITE EL NUMERO A CONVERTIR" << endl;
			cout << "SOLO NUMEROS POSITIVOS" << endl;
			cin >> octales;
			decimal = 0;
			octaldecimal();
			
			break;
		case 5:
			cout << "DIGITE EL NUMERO A CONVERTIR" << endl;
			cout << "SOLO NUMEROS POSITIVOS" << endl;
			cin >> n;
			if (n >= 16) {
				hexadecimal(n);
			}
			cout << endl;
			
			break;
		case 6:


			break;
		default:
			break;
		}
	}
	system("pause");
}

void binario(int b)
{
	if (b > 1)
		binario(b / 2);
	cout << b % 2;
}

void octal(int o)
{
	if (o > 7)
		octal(o / 8);
	cout << o % 8;
}

void hexadecimal(int h)
{
	if (h >= 16)
	{
		do
		{
			aux = h % 16;
			h = h / 16;
			VH[i] = aux;
			i++;
		} while (h >= 16);
		VH[i] = h;
	}
	else
	{
		VH[i] = h;
	}
	while (i >= 0)
	{
		switch (VH[i])
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << VH[i];
			break;
		case 10:
			cout << 'A';
			break;
		case 11:
			cout << 'B';
			break;
		case 12:
			cout << 'C';
			break;
		case 13:
			cout << 'D';
			break;
		case 14:
			cout << 'E';
			break;
		case 15:
			cout << 'F';
			break;
		}
		i--;
	}

}
void decimalbinario() {
	do
	{
		num = (int)binarios % 10;
		decimal = decimal + num * pow(2.0, exponente);
		exponente++;
		binarios = (int)(binarios / 10);

	} while (((binarios / 10)) != 0);

	decimal = decimal + binarios * pow(2.0, exponente);
	cout << endl << "Decimal: " << decimal << endl;
	system("pause");
}
void octaldecimal() {
	do
	{
		decimal = decimal + (octales % 10)* pow(8, i);
		i++;
		octales = octales / 10;

	} while (octales != 0);

	cout << endl << "Decimal: " << decimal << endl;
	system("pause");

}




