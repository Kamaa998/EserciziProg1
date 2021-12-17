#include <iostream>
using namespace std;

int indice(long** A, int n, int m, long x) {
	int occ = 0;
	int indice = 0;
	for (int j = 0; j < n; j++) {
		int cont = 0;
		for (int i = 0; i < n; i++) {
			if (A[i][j] == x) {
				cont++;
			}
		}
		if (occ < cont) {
			occ = cont;
			indice = j;
		}
	}
	return indice;
}

int main()
{
	long** matrice = new long* [2];

	for (int i = 0; i < 2; i++) {
		*(matrice + i) = new long[2];
	}

	matrice[0][0] = 1;
	matrice[0][1] = 5;
	matrice[1][0] = 3;
	matrice[1][1] = 2;

		cout << indice(matrice, 2, 2, 3) << endl;
}
