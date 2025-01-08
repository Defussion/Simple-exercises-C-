#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int NOTA[4][5], i, j, acum;
	srand(time(NULL));

	for (i = 1; i <= 4; i++) {

		for (j = 1; j <= 5; j++) {
			NOTA[i][j] = rand() % (0, 11);
		}
	}
	for (j = 1; j <= 5; j++)
	{
		cout << " " << "Operario" << j;
	}
	cout << endl;
	cout << "**************************************";
	for (i = 1; i <= 4; i++) {
		cout << endl << "Turno" << i << "   ";
		for (j = 1; j <= 5; j++) { cout << NOTA[i][j] << "\t"; }
	}
	cout << endl;
	for (i = 1; i <= 4; i++) {
		acum = 0;
		cout << "Turno" << i << ": ";
		for (j = 1; j <= 5; j++) {
			if (NOTA[i][j] >= 6)
			{
				acum++;
			}
		}cout << endl;
		if (acum == 5) {
			cout << "Todos lo aprobaron." << endl;
		}
		else { cout << "No es aprobado por tados" << endl; }
	}
	cout << endl;
	system("pause");
}