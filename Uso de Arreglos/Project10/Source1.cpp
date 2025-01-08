#include <iostream>
using namespace std;
int main() {
	int ec[2];
	int suma = 0;
	int pan = 60, man = 21, jam = 22, que  = 25;
	int p = 0, j = 0, q = 0;
	int M = 0;
	for (int i = 0; i <21; i++)
	{
		pan = pan - 2;
		
		jam = jam - 1;
		que = que - 1;
		M = M++;
		
	}
	for (int i = 0; i < jam; i++) {
		pan = pan - 2;
		man = man - 1;
		que = que - 1;
		p = p++;
		ec[0] = M;
		ec[1] = p;
	
	}
	cout << endl;
	cout << "              COMPLETOS y SOLO 3 INGREDIENTES" << endl;
	cout << "Empanedados";
	for (int i = 0; i < 2; i++)
	{

		
		cout << "       " << ec[i];
	}
	cout << endl<< endl;
	system("pause");
	return 0;
	
}

	
