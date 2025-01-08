#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int numero, dato;
	int contador = 0;
	int intentos = 5;
	srand(time(NULL));
	dato = 1 + rand() % 19;

	do {

		cout << "Adivine un numero del 0 al 19, tienes " << intentos << " intentos" << endl;
		cin >> numero;
		intentos--;

		if (numero > dato) {
			cout << "digite un numero MENOR" << endl;
		}
		else if (numero < dato) {
			cout << "digite un  numero MAYOR" << endl;
		
		}
		if (intentos == 0 && numero != dato) {
			cout << "Has perdido" << endl;
			break;
		}

	}while (numero != dato);
	
	
	if (numero == dato) {
	cout << "¡Adivinaste el número, GANASTE!" << endl;
	}
	system("pause");
	return 0;

}