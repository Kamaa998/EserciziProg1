bool riga(string*** A, int n, int m, short w) {
	bool c = false;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (A[i][j - 1] && A[i][j]) {
				string s1 = A[i][j - 1]->substr(0, w);
				string s2 = A[i][j]->substr(A[i][j].lenght() - w, A[i][j].lenght());
				if (s1 == s2) {
					c = true;
					break;
				}
			}
		}
		if (c == true) {
			break;
		}
	}
	return c;
}
