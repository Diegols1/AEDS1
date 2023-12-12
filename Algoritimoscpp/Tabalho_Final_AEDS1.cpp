// Trabalho Final AEDS1
// Professor: Áthila Rocha Trindade
//Alunos: Murilo Santiago,  ,
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int tamanho = 6; 

// Função para preencher a matriz com valores aleatórios (0 ou 1)
void preencherMatriz(int matriz[][tamanho]) {
    srand(time(0));
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j] = rand() % 2;  // Preenche aleatoriamente com 0 ou 1
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[][tamanho]) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Função para contar o número de minas nas vizinhanças de uma posição na matriz
int contarMinasVizinhas(int matriz[][tamanho], int row, int col) {
    int count = 0;
    // Loop para percorrer as posições vizinhas
    for (int i = max(0, row - 1); i <= min(tamanho - 1, row + 1); ++i) {
        for (int j = max(0, col - 1); j <= min(tamanho - 1, col + 1); ++j) {
            if (i != row || j != col) {
                count += matriz[i][j];
            }
        }
    }
    return count;
}

int main() {
    int campoMinado[tamanho][tamanho];

    char continuar;
    do {
        // Preenche a matriz com valores aleatórios
        preencherMatriz(campoMinado);

        // Imprime a matriz
        cout << "Campo Minado:" << endl;
        imprimirMatriz(campoMinado);

        // Calcula e imprime a quantidade de minas nas vizinhanças dos elementos não minados
        cout << "\nQuantidade de minas nas vizinhanças dos elementos não minados:" << endl;
        for (int i = 0; i < tamanho; ++i) {
            for (int j = 0; j < tamanho; ++j) {
                if (campoMinado[i][j] == 0) {
                    cout << "a[" << i << "][" << j << "]: " << contarMinasVizinhas(campoMinado, i, j) << " minas" << endl;
                }
            }
        }

        // Pergunta se o usuário deseja continuar
        cout << "\nDeseja continuar (s/n)? ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
