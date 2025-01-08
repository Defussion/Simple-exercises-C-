#include "CCalculadora.h"
#include<iostream>

using namespace std;


void CCalculadora::borrar() {
	anum1 = 0;
	anum2 = 0;



}

int CCalculadora::sumar(int pn1, int pn2) {
	anum1 = pn1;
	anum2 = pn2;
	aresult = anum1 + anum2;
	return aresult;

}
int CCalculadora::multiplicar(int pn1, int pn2) {
	anum1 = pn1;
	anum2 = pn2;
	aresult = anum1 * anum2;

	return aresult;

}
int CCalculadora::restar(int pn1, int pn2) {
	anum1 = pn1;
	anum2 = pn2;
	aresult = anum1 - anum2;
	return aresult;
}
void CCalculadora::dividir(float pn1,float pn2) {

	adiv1 = pn1;
	adiv2 = pn2;
	aresult = adiv1 / adiv2;
	cout << aresult << endl;

}
