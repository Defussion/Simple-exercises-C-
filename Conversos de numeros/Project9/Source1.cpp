#include <string.h>
#include <iostream>
using namespace std;
int main() {
	int dec = 0, l, i = 0, novalido = 0;
	char hex[255];
	cout << "Digite un numero hexadecimal" << endl;
	cin >> hex;
	l = strlen(hex);
	while (i < l) {
		switch (hex[i])
		{
		case '0':
			dec = dec + (int)pow(16, l - i - 1) * 0;
			break;
		case '1':
			dec = dec + (int)pow(16, l - i - 1) * 1;
			break;
		case '2':
			dec = dec + (int)pow(16, l - i - 1) * 2;
			break;
		case '3':
			dec = dec + (int)pow(16, l - i - 1) * 3;
			break;
		case '4':
			dec = dec + (int)pow(16, l - i - 1) * 4;
			break;
		case '5':
			dec = dec + (int)pow(16, l - i - 1) * 5;
			break;
		case '6':
			dec = dec + (int)pow(16, l - i - 1) * 6;
			break;
		case '7':
			dec = dec + (int)pow(16, l - i - 1) * 7;
			break;
		case '8':
			dec = dec + (int)pow(16, l - i - 1) * 8;
			break;
		case '9':
			dec = dec + (int)pow(16, l - i - 1) * 9;
			break;
		case 'A':
			dec = dec + (int)pow(16, l - i - 1) * 10;
			break;
		case 'B':
			dec = dec + (int)pow(16, l - i - 1) * 11;
			break;
		case 'C':
			dec = dec + (int)pow(16, l - i - 1) * 12;
			break;
		case 'D':
			dec = dec + (int)pow(16, l - i - 1) * 13;
			break;
		case 'E':
			dec = dec + (int)pow(16, l - i - 1) * 14;
			break;
		case 'F':
			dec = dec + (int)pow(16, l - i - 1) * 15;
			break;
		default:
			novalido = 1;
				break;
		}
		if (novalido==1)
			break;
			i++;
	}
	if (novalido == 0)
		cout << "Decimal:"<< dec << endl;
	else
	{
		cout << "Dato erroneo" << endl;
		return 0;
	}
	system("pause");
}
