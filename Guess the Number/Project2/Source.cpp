#include <iostream>
#include <time.h>


using namespace std;

int main() {
	srand(time(NULL));

	int  intentos = 5;
	int  y= 0;
	int  num = 0;
	

	while (true) {
		
		cout << "Digite un numero del 0 al 19" << endl;
		cin >> num;
		y = rand() % 19;

		if (y==num){
			cout << "You win" << endl;
			break;
			
		}
		else {
			intentos--;
			cout << "You lose" << endl;
		}
		if (intentos == 0)
		{

			cout << "You totally lose" << endl;
			break;
		}
	}
	system("PAUSE");
	return 0;
}
