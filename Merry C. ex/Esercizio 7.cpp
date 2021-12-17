#include <iostream>
using namespace std;

int colonne(int*** A, int n, int m, double d1, double d2, short s) {

	int col = 0;

	for (int j = 0; j < m; j++) {

		int cont = 0;

		for (int i = 1; i < n; i++) {

			if (A[i][j] && A[i - 1][j]) {

				double r = (double)*(A[i - 1][j]) / *(A[i][j]);

				if (r > d1 && r < d2) {
					cont++;
				}
			}
		}
			if (cont >= s) {
				col++;
			}
		}
	
	if( col == 0){
		cout << "Nessun elemento!";
	}
	return col;
}

int main() {

	int*** matrice = new int** [10];
	for (int i = 0; i < 3; i++) {
		matrice[i] = new int* [10];
		for (int j = 0; j < 2; j++) {
			matrice[i][j] = new int[10];
		}
	}
	*matrice[0][0] = 8;
	*matrice[0][1] = 7;
	*matrice[1][0] = 3;
	*matrice[1][1] = 3;
	*matrice[2][0] = 4; 
	*matrice[2][1] = 2;

	cout << colonne(matrice, 3, 2, 1, 6, 2);

	return 0;
}
