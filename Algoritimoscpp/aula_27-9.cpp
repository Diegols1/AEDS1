#include <iostream>
#include <string>

using namespace std;

int main(){

    string sn, opcao;

    while (true) { 

        cout << "Bem Vindo a lista 2 ---------------------------\n";
        cout << "-----[A] - 2 numeros maior que 10--------------\n";
        cout << "-----[B] - Concessao de emprestimo-------------\n";
        cout << "-----[C] - Numero menor ou maior que 20--------\n";
        cout << "-----[D] - Quais numeros são divisiveis, 10,5,2\n";
        cout << "-----[E] - Classe eleitoral--------------------\n";
        cin >> opcao;
    switch (opcao[0]){
            case 'A':
            case 'a':
            int numero1, numero2, numero3;
            
            cout << "qual o primeiro numero?\n";
            cin >> numero1;
            cout << "qual o segundo numero?\n";
            cin >> numero2;
            numero3=numero1+numero2;
                if (numero3>10){
                    cout << "A soma de:" << numero1 <<" é " << numero2 << " =" << numero3 <<" que é maior que 0";
                }else(numero3<10);
                    cout << "A soma de:" << numero1 <<" é " << numero2 << " =" << numero3 <<" que é menor que 0";
            case 'B':
            case 'b':
            int salario, valordesejo, parcela, valorparcela;
            cout << "Bem vindo ao sistema de concessões de emprestimo\n";
            cout << "Informe o seu salário:\n";
            cin >> salario;
            cout << "Qual o Valor do emprestimo que voce deseja?\n";
            cin >> valordesejo;
            cout << " Quantas parcelas deseja o seu emprestimo?\n";
            cin >> parcela;
            valorparcela= valordesejo/parcela;
            if (valorparcela>0.2*salario)
                cout << "O emprestimo não pode ser concedido\n";
            else 
                cout << "O emprestimo tera " << parcela << " parcelas de " << valorparcela;
            case 'C':
            case 'c':
                int menor20;
                cout << "Digite um número: \n";
                cin >> menor20;
                if (menor20>20)
                    cout<<"o número é maior que 20";
                if (menor20=20)
                    cout<<"o número é = que 20";
                else 
                    cout <<"o número é menor que 20";
            
    }
        cout << "\nDeseja realizar outra operação? [s/n]";
        cin >> sn;
        if (sn != "S" && sn != "s") {
            break;
        }
    }
return 0;
}