#include <iostream>
using namespace std;
int main() {
	int x, cv, v;
	int suma = 0;
	int     i;

	do
	{
		cout << "Digite la cantidad de ventas que realizo" << endl;
		cin >> cv;
		for (i = 1; i <= cv; i++)
		{
			cout << "Digite el valor de la venta" << endl;
			cin >> v;
			suma = suma + v;
		}
		cout << "la suma es:" << suma << endl;
		while (suma = !0)
		{

			if (suma<5000000)
			{
				cout << "Su comision es del 5%" << endl;
				break;

			}
			if (suma >= 5000000 && suma<10000000)
			{
				cout << "Su comosion es del 7.5%" << endl;
				break;
			}
			if (suma >= 10000000 && suma <= 20000000)
			{
				cout << "Su comosion es del 10%" << endl;
				break;
			}
			if (suma>20000000)
			{
				cout << "Su comision es del 15%" << endl;
				break;
			}

		}
		cout << "1 para seguir con otro vendedor o 0 para terminar" << endl;
		cin >> x;
		system("cls");
	} while (x == 1);

	system("pause");
	return 0;
}

