#include <iostream>
#include <string>
using namespace std;

char sn;

struct Ficha {
    string rua, nome;
    string inscri;
    string cep;
    int numero;
    long long cpf;  // Use a long long for CPF to avoid potential overflow
};

int main() {
    const int maxEmployees = 100;
    Ficha empregados[maxEmployees];

    for (int i = 0; i < maxEmployees; i++) {
        cout << "Enter the Name of employee N*:" << i + 1 << endl;
        cin >> empregados[i].nome;
        cout << "What is the cep of the employee?" << endl;
        cin >> empregados[i].cep;
        cout << "What is the N* registration of the employee?" << endl;
        cin >> empregados[i].inscri;
        cout << "What is the street of the employee?" << endl;
        cin >> empregados[i].rua;
        cout << "What is the Number of the employee?" << endl;
        cin >> empregados[i].numero;
        cout << "What is the CPF of the employee?" << endl;
        cin >> empregados[i].cpf;

        cout << "Do you want to Continue? [s/n]";
        cin >> sn;

        cout << "Name of employee " << i + 1 << ": " << empregados[i].nome << " || Registration N*: " << empregados[i].inscri << endl;
        cout << "Employee's Details: \n";
        cout << "CEP: " << empregados[i].cep << " || Street: " << empregados[i].rua << endl;
        cout << "Phone Number: " << empregados[i].numero << " || CPF: " << empregados[i].cpf << endl;

        if (sn == 'n' || sn == 'N') {
            break;
        }
    }

    return 0;
}