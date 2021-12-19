bool coppia(double** D, int n, int m, int a) {
	bool c = true;
	for (int j = 0; j < m; j++) {
		int somma = 0;
		for (int i = 1; i < n; i++) {
			somma += D[i - 1][j] + D[i][j];
			int somma = somma + 0.5;
			if (somma == a) {
				c = true; 
				break;
			}
		}
		if (c==true) {
			break;
		}
	}
	return c;
}
