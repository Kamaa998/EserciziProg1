string** copia(string** A, int n, int m, int k) {
	string** copia = new string*[n];
	for (int i = 0; i < m; i++) {
		copia[i] = new string[m];
	}
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (j == k) {
				for (int z = 0; z < A[i][j].lenght(); z++) {
					switch (A[i][j][z]) {
					case 'j':
					case 'k':
					case 'x':
					case 'y':
					case 'w':
						break;
					default:
						copia[i][j] += A[i][j][z];

					}
				}
			}
		}
	}
	return copia;
}
