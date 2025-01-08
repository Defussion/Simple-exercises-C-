#include <iostream>
#include <time.h>

using namespace std;
int main() {
	int matriz[5][6];
	int n;
	int  fi, co;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)

	{
		for ( int j = 0; j < 5; j++) {
			matriz[i][j] = rand() % 20 + 1;
		}
	}
	for (int  i = 0; i < 5; i++)
	{
		cout << endl;
		for ( int j = 0; j < 5; j++) {

			cout << matriz[i][j] << "\t";
		}
	}
	cout << endl;
	cout << "Que numero desea buscar en la matriz, el numero no debe ser mayor de 20" << endl;
	cin >> n;
	while (true)
	{
	
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++) {
				if (n == matriz[i][j])
				{
					co = j;
					fi = i;
					matriz[i][j] = 0;
					
				}
				
			}
		}
		for (int i = 0; i < 5; i++)
		{
			cout << endl;
			for (int j = 0; j < 5; j++) {
				if (n != matriz[i][j])
				{
					cout << "El valor ingresado no esta dentro de la matriz" << endl;
				}
			}
		}
	}
	cout << "El valor ingresado ha sido remplazado por cero dentro de la matriz." << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << "\t";
		}
	}
		
	system("pause");
	return 0;
}


		

