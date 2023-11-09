#include <iostream>

using namespace std;

int main(){
    int op;
    string sn;

    while (true) { // Loop to repeat the operation
        op = 0;

        cout << "-----------------------------------------------\n";
        cout << "Bem Vindo a calculadora, c++ escolha a operação\n";
        cout << "-----[1] - Soma -------------------------------\n";
        cout << "-----[2] - Subtração---------------------------\n";
        cout << "-----[3]---------------------------------------\n";
        cout << "-----[4] - Multiplicação-----------------------\n";
        cout << "-----------------------------------------------\n";
        cin >> op;

        switch (op) {
            case 1:
            case 2:
            case 3:
            int main(){
            int v[10],posmaior,posmenor,maior,menor;
           menor=2147483647;
           maior=2147483647;
           for(int i=0; i<10; i++){
                cout<< "digite o valor\n";
                cin >> v[i];
                if(v[i]>maior){
                    maior=v[i];
                    posmaior=i;
                }
                if(v[i]<menor){
                    menor=v[i];
                    posmenor=i;
                }
           }
    