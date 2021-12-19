int colonne(string *** M, int n, int m, unsigned short k, unsigned short s) {
	int nc = 0;
	for (int j = 0; j < m; j++) {
		int ns = 0;
		for (int i = 0; i < n; i++) {
			if(M[i][j]!=nullptr){
				string s1 = *M[i][j];
				int nv = 0;
				for (int z = 0; z < s1.lenght(); z++) {
					switch (s1[z]) {
					case: 'a'
					case: 'e'
					case: 'i'
					case: 'o'
					case: 'u'
						nv++;
						break;
						}
					}
				}
			}
			if (nv < s) {
				ns ++;
			}
			if (ns >= k) {
				nc++;
			}
		}
	return nc;
}
