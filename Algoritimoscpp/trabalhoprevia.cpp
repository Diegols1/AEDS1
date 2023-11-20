#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para preencher o tabuleiro aleatoriamente
vector<vector<bool>> preencherTabuleiro() {
    vector<vector<bool>> tabuleiro(6, vector<bool>(6, false));
    
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            tabuleiro[i][j] = rand() % 2 == 1;
        }
    }

    return tabuleiro;
}

// Função para mostrar o tabuleiro
void mostrarTabuleiro(const vector<vector<bool>>& tabuleiro) {
    for (const auto& linha : tabuleiro) {
        for (bool posicao : linha) {
            cout << (posicao ? '1' : '0') << ' ';
        }
        cout << endl;
    }
}

// Função para verificar as possibilidades de travessia
void verificarTravessia(const vector<vector<bool>>& tabuleiro) {
    bool linhas = false;
    bool colunas = false;
    bool diagonalPrincipal = true;
    bool diagonalSecundaria = true;

    for (int i = 0; i < 6; ++i) {
        if (all_of(tabuleiro[i].begin(), tabuleiro[i].end(), [](bool posicao) { return !posicao; })) {
            linhas = true;
        }

        if (all_of(tabuleiro.begin(), tabuleiro.end(), [i](const vector<bool>& linha) { return !linha[i]; })) {
            colunas = true;
        }

        if (tabuleiro[i][i]) {
            diagonalPrincipal = false;
        }

        if (tabuleiro[i][5 - i]) {
            diagonalSecundaria = false;
        }
    }

    if (linhas) {
        cout << "É possível atravessar pelas linhas." << endl;
    }
    if (colunas) {
        cout << "É possível atravessar pelas colunas." << endl;
    }
    if (diagonalPrincipal) {
        cout << "É possível atravessar pela diagonal principal." << endl;
    }
    if (diagonalSecundaria) {
        cout << "É possível atravessar pela diagonal secundária." << endl;
    }
}

int main() {
    srand(time(0));

    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        vector<vector<bool>> tabuleiro = preencherTabuleiro();
        mostrarTabuleiro(tabuleiro);
        verificarTravessia(tabuleiro);

        cout << "Deseja continuar (s/n)? ";
        cin >> continuar;
    }

    return 0;
}