bool* arr(string*** A, int n, int m, short k, string s) {

	bool* a = new bool[n];

	for (int i = 0; i < n; i++) {

		a[i] = false;
		int cont = 0;

		for (int j = 0; j < m; j++) {

			if ((A[i][j]) && A[i][j]->find(s) != string::npos) {
				cont++;
			}
		}
		if (cont >= k) {
			a[i] = true;
		}
	}
	return a;
}

