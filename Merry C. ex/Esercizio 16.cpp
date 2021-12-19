bool equivalenti(string*** A, int n, int m, char c) {
	
	int dim = n * m;
	
	string* s1 = new string[dim];

	bool c = false;

	int k = 0;
	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j < m; j++) {
			string s = *A[i][j];
			for (int z = 0; z < s.lenght(); z++) {
				if (s[z] != c) {
					s1[k] += s[z];
				}
			}
			k++;
		}
	}
	for (int i = 0; i < dim - 1; i++) {
		for (int j = i+1; j < dim; j++) {
			if (s1[i] == s1[j]) {
				bool c = true;
				break;
			}
		}
		if (c == true) {
			break;
		}
	}
	return c;
}
