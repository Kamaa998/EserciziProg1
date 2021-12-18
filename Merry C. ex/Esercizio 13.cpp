bool es13(char*** A, int n) {
	bool c = false;
	for (int j = 0; j < n; j++) {
		int cont = 0;
		for (int i = 0; i < n; i++) {
			if (A[i][j] && A[i][i]) {
				if (A[i][j] == A[i][i]) {
					cont++;
				}
			}
		}
		if (cont == n) {
			c = true;
			break;
		}
	}
	return c;
}
