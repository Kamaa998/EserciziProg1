double percentuale(string*** S, int n, int m, string s1, short k) {
	int ns = 0;
	for (int j = 0; j < m; j++) {
		if (j >= k - 1) {
			break;
		}
		for (int i = 0; i < n; i++) {
			if (S[i][j] != nullptr) {
				string s = *S[i][j];
				if (s.lenght() > s1.lenght) {
					ns++;
				}
			}
		}
	}
	double perc = (ns / (n * k) * 100.0);
	return perc;
}
