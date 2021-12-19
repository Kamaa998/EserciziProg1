bool es15(bool** A, bool** B, bool** C, int n) {
	bool c = false;
	int cont = 0;
	for (int i = 0; i < n; i++) {
		if ((A[i][n - i - 2] == B[i][n - 2 - i]) && (A[i][n - i - 2] == C[i][n - 2 - i])) {
			cont++;
		}
	}
	if (cont == n - 1) {
		c = true;
	}
	return c;
}
