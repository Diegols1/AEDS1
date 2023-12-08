#include <iostream>
#include <cmath>
using namespace std;

// Matriz de memória da IA para associar características de rostos
int iaMemory[4][4], i, j;

// Função para ensinar a IA com base nas características de um rosto
int teachMatrix() {
    // Obtendo o vetor de características do rosto
    int vetor[4];
    for (i = 0; i < 4; i++) {
        cout << "Envie elemento " << i << " do vetor de características do rosto para aprendizado: ";
        cin >> vetor[i];
    }

    // Aprendizado da matriz com base nas características do rosto
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            iaMemory[i][j] += vetor[i] * vetor[j];
        }
    }

    // Exibindo a matriz de memória no console após o aprendizado
    cout << "Matriz de Memória Atualizada:\n";
    for (i = 0; i < 4; i++) {
        cout << "|";
        for (j = 0; j < 4; j++) {
            cout << iaMemory[i][j] << "|";
        }
        cout << '\n';
    }

    return 0;
}

// Função para verificar a resposta da IA com base nas características de um rosto
int check() {
    int vetor[4], matrixVetor[4], numerator, aux1, aux2;
    double iaResponse;

    numerator = 0;
    aux1 = 0;
    aux2 = 0;

    // Obtendo o vetor de características do rosto para verificação
    for (i = 0; i < 4; i++) {
        cout << "Envie elemento " << i << " do vetor de características do rosto para checagem: ";
        cin >> vetor[i];
    }

    // Obtendo a resposta da IA
    for (i = 0; i < 4; i++) {
        matrixVetor[i] = iaMemory[i][0] * vetor[i];
        for (j = 1; j < 4; j++) {
            matrixVetor[i] += iaMemory[i][j];
        }
    }

    // Calculando a qualidade da resposta com base na similaridade cosseno
    for (i = 0; i < 4; i++) {
        numerator += matrixVetor[i] * vetor[i];
        aux1 += matrixVetor[i] * matrixVetor[i];
        aux2 += vetor[i] * vetor[i];
    }

    iaResponse = cos((numerator / (sqrt(aux1) * sqrt(aux2))));
    cout << "Resposta da IA para as características do rosto é: " << iaResponse << "\n";

    return 0;
}

// Função principal
int main() {
    // Inicializando a matriz de memória para características de rostos
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            iaMemory[i][j] = 0;
        }
    }

    // Exibindo a matriz de memória inicial no console
    cout << "Matriz de Memória Inicial para Características de Rostos:\n";
    for (i = 0; i < 4; i++) {
        cout << "|";
        for (j = 0; j < 4; j++) {
            cout << iaMemory[i][j] << "|";
        }
        cout << '\n';
    }

    // Menu principal para ensinar ou verificar rostos
    int menu = 1;
    while (menu == 1) {
        int choice;
        cout << "Pressione 1 para ensinar a IA com características de rosto. \n";
        cout << "Pressione 2 para verificar se a IA reconhece características de rosto. \n";
        cout << "Pressiona 3 para sair. \n";
        cin >> choice;

        switch (choice) {
            case 1: {
                teachMatrix();
                break;
            };
            case 2: {
                check();
                break;
            };
            case 3: {
                menu = 0;
                break;
            };
        }
    }

    return 0;
}
