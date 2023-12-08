#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 6;

void preencherMatriz(int matriz[][SIZE]) {
    srand(time(0));
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matriz[i][j] = rand() % 2;  // Preenche aleatoriamente com 0 ou 1
        }
    }
}

void imprimirMatriz(int matriz[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int contarMinasVizinhas(int matriz[][SIZE], int row, int col) {
    int count = 0;
    for (int i = max(0, row - 1); i <= min(SIZE - 1, row + 1); ++i) {
        for (int j = max(0, col - 1); j <= min(SIZE - 1, col + 1); ++j) {
            if (i != row || j != col) {
                count += matriz[i][j];
            }
        }
    }
    return count;
}

int main() {
    int campoMinado[SIZE][SIZE];

    char continuar;
    do {
        preencherMatriz(campoMinado);

        cout << "Campo Minado:" << endl;
        imprimirMatriz(campoMinado);

        cout << "\nQuantidade de minas nas vizinhanças dos elementos não minados:" << endl;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (campoMinado[i][j] == 0) {
                    cout << "a[" << i << "][" << j << "]: " << contarMinasVizinhas(campoMinado, i, j) << " minas" << endl;
                }
            }
        }

        cout << "\nDeseja continuar (s/n)? ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
    