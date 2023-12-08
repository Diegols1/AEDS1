//EVA2 25/11/2023
// Murilo Santiago Escobedo

#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int matricula, nota;
};

int main() {
    int MAX_ALUNOS = 25;
    Aluno alunos[MAX_ALUNOS];
    char continuar;
    int totalAlunos = 0;

    while (totalAlunos < MAX_ALUNOS) {
        cout << "Digite o nome do aluno: ";
        getline(cin, alunos[totalAlunos].nome);
        cout << "Digite a matricula do aluno: ";
        cin >> alunos[totalAlunos].matricula;
        cout << "Digite a nota do aluno: ";
        cin >> alunos[totalAlunos].nota;
        totalAlunos++;
        cout << "Deseja continuar inserindo dados? (S para Sim, N para Não): ";
        cin >> continuar;
        if (continuar != 'S' && continuar != 's') {
            break;
        }
        cin.ignore();
    }

    if (totalAlunos > 0) {
        Aluno maiorNota = alunos[0];
        for (int i = 1; i < totalAlunos; ++i) {
            if (alunos[i].nota > maiorNota.nota) {
                maiorNota = alunos[i];
            }
        }
        Aluno segundaMaiorNota = alunos[0];
        for (int i = 1; i < totalAlunos; ++i) {
            if (alunos[i].nota > segundaMaiorNota.nota && alunos[i].nota < maiorNota.nota) {
                segundaMaiorNota = alunos[i];
            }
        }
        Aluno menorNota = alunos[0];
        for (int i = 1; i < totalAlunos; ++i) {
            if (alunos[i].nota < menorNota.nota) {
                menorNota = alunos[i];
            }
        }
        Aluno segundaMenorNota = alunos[0];
        for (int i = 1; i < totalAlunos; ++i) {
            if (alunos[i].nota < segundaMenorNota.nota && alunos[i].nota > menorNota.nota) {
                segundaMenorNota = alunos[i];
            }
        }
        cout << "Dados do aluno com maior nota:\nNome: " << maiorNota.nome << "\nMatricula: " << maiorNota.matricula << "\nNota: " << maiorNota.nota << "\n\n";
        cout << "Dados do aluno com segunda maior nota:\nNome: " << segundaMaiorNota.nome << "\nMatricula: " << segundaMaiorNota.matricula << "\nNota: " << segundaMaiorNota.nota << "\n\n";
        cout << "Dados do aluno com menor nota:\nNome: " << menorNota.nome << "\nMatricula: " << menorNota.matricula << "\nNota: " << menorNota.nota << "\n\n";
        cout << "Dados do aluno com segunda menor nota:\nNome: " << segundaMenorNota.nome << "\nMatricula: " << segundaMenorNota.matricula << "\nNota: " << segundaMenorNota.nota << "\n\n";
    } else {
        cout << "Nenhum aluno inserido.\n";
    }
    system("pause");
    return 0;
}