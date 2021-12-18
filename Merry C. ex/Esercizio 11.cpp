bool calcolo(int*** A, int n, int m) {
    int somma = 0;
    for (int i = 1; i < n ; i++) {
        somma += *A[i][n - i];
    }
    if (somma % n == 0)
        return true;
    else
        return false;
}
