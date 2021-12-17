#include <iostream>
#include <string>
using namespace std;

bool es9(string*** Q, int n, string s) {

	int contpri = 0; 
	int contsec = 0;
	bool c = false;

	for (int i = 0; i < n; i++) {
		
		if (Q[i][i] != nullptr) {
			
			if (Q[i][i]->find(s) != string::npos) {
				contpri++;
			}
		}
		if (Q[i][n - i - 1] != nullptr) {
			if (Q[i][n - i - 1]->find(s) != string::npos) {
				contsec++;
			}
		}
	}
	if (contpri > contsec) {
		bool c = true;
	}
	return c;
}

int main() {

	string*** M = new string * *[10];
	for (int i = 0; i < 3; i++) {
		M[i] = new string * [10];
		for (int j = 0; j < 3; j++) {
			M[i][j] = new string[10];
		}
	}
	*M[0][0] = "dfefe";
	*M[1][1] = "ao";
	*M[2][2] = "fewfwe";
	*M[0][2] = "ciao";
	*M[2][0] = "efwfwefew";

	cout << es9(M, 3, "ao");
}
