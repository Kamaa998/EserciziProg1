#include <iostream>
using namespace std;

bool colonna(int** Q, int n, double w) {

    double sommasec = 0;
    bool c = false;

    for (int i = 0; i < n; i++) {
        sommasec += Q[i][n - i - 1];
    }
    for (int j = 0; j < n; j++) {
        double sommac = 0;
        for (int i = 0; i < n; i++) {
            sommac += Q[i][j];
        }
        if (sommac / ( sommasec * 1,0) > w) {
            c = true;
            break;
        }
    }
    return c;
}

int main()
{   
    int **matrice = new int *[3];

    for (int i = 0; i < 3; i++) {
        *(matrice + i) = new int[3];
    }
    matrice[0][0] = 1;
    matrice[0][1] = 2;
    matrice[0][2] = 3;
    matrice[1][0] = 4;
    matrice[1][1] = 5;
    matrice[1][2] = 6;
    matrice[2][0] = 7;
    matrice[2][1] = 8;
    matrice[2][2] = 9;

    cout << colonna(matrice, 3, 7);
}
