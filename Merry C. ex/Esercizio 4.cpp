#include <iostream>
#include <string>
using namespace std;

bool colonna(string*** P, int n, int m, short a, short b, string s) {

	bool c = false;

	for (int j = 0; j < m; j++) {
		int contatore = 0;
		for (int i = 0; i < n; i++) {
			if(*P[i][j] != nullptr ){
		      if (P[i][j]->find(s) != string::npos) {
					contatore++;
				}
		  }
		}
		if (contatore >= a && contatore <= b) {
			c = true;
			break;
		}
	}
	return c;
}

int main() {

	string*** matrice = new string **[2];

	for (int i = 0; i < 2; i++) {
		*(matrice + i) = new string * [2];
		for (int j = 0; j < 2; j++) {

			matrice[i][j] = new string;


		}
	}
	*matrice[0][0] = "ciao";
	*matrice[1][0] = "daod";
	*matrice[0][1] = "allah";
	*matrice[1][1] = "diocan";

	cout << colonna(matrice, 4, 3, 1, 5, "ao") << endl;

	return 0;
}
