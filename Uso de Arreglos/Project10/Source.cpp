//#include <iostream>
//#include <time.h>
//#include <iomanip>
//
//
//using namespace std;
//bool Ver(int matriz[][4], int f, int c, int numE) {
//	for (int fila = 0; fila < 4; fila++)
//	{
//		for (int columna = 0; columna < 4; columna++)
//		{
//			if (numE == matriz[fila][columna]) {
//				return false;
//			}
//		}
//		
//	}
//	return true;
//
//}
//int main() {
//	
//	int aux, nume;
//	srand(time(NULL));
//	int m[4][4];
//	for (int fila = 0; fila < 4; fila++)
//	{
//		for (int columna = 0; columna < 4; columna++)
//		{
//			nume = rand() % 50;
//			while (Ver(m,4,4,nume)==false)
//			{
//				nume = rand() % 50;
//			}
//			m[fila][columna] = nume;
//			cout<<setw(3) << m[fila][columna] << "  ";
//
//		}
//		cout << endl;
//	}
//	cout << "********************************************" << endl;
//	for (int f = 0; f < 4; f++)
//	{
//		for (int c = 0; c < 4; c++)
//		{
//			for (int f1 = f; f1 < 4; f1++) {
//				int caux = 0;
//				if (f == f1)
//				{
//					caux = c + 1;
//				}
//
//				for (int c1 = caux; c1 < 4; c1++) {
//					if (m[f][c]>m[f1][c1])
//					{
//						aux = m[f1][c1];
//						m[f1][c1] = m[f][c];
//						m[f][c] = aux;
//
//
//					}
//				}
//			}
//		}
//	}
//	cout << "Ordenada" << endl;
//	for (int fila = 0; fila < 4; fila++)
//	{
//		for (int columna = 0; columna < 4; columna++)
//		{
//
//			cout<< setw(3) << m[fila][columna] << "  ";
//
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}