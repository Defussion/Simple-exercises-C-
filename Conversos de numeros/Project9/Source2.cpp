//Hexa a octal
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;
int hex(char u) {
	int n;
	if (u == '0') { n = 0; }
	if (u == '1') { n = 1; }
	if (u == '2') { n = 2; }
	if (u == '3') { n = 3; }
	if (u == '4') { n = 4; }
	if (u == '5') { n = 5; }
	if (u == '6') { n = 6; }
	if (u == '7') { n = 7; }
	if (u == '8') { n = 8; }
	if (u == '9') { n = 9; }
	if (u == 'A') { n = 10; }
	if (u == 'B') { n = 11; }
	if (u == 'C') { n = 12; }
	if (u == 'D') { n = 13; }
	if (u == 'E') { n = 14; }
	if (u == 'F') { n = 15; }
	return n;
}
int main() {
	char h[22];
	int j=0,i ,m, n, p, k;
	cout << "Digite un numero hexadecimal" << endl;
	cin >> h;
	i = strlen(h);
	n = 0;
	for (j - i - 1, k = 0; j >= 0, k < i; j--, k++) {

		m = hex(h[j]);
		p = m * pow(16, k);
		n = n * p;
	}
	cout << "La conversion a decimal es;" <<n<<endl; system("pause");
}