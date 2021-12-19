bool es17(int** A, int n, int m, double w, double v) {
	bool c = false;
	for (int j = 0, j < m, j++) {
		int somma = 0;
		for (int i = 0; i < n; i++) {
			somma += A[i][j];
		}
		double media = (double) somma / n;
		if (media <= w && media >= v) {
			c = true;
			break;
		}
	}
	return c;
}
