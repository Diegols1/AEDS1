#include <iostream>

using namespace std;

int main(){
    int op;
    string sn;

    while (true) { // Loop to repeat the operation
        op = 0;

        cout << "-----------------------------------------------\n";
        cout << "Bem Vindo a calculadora, c++ escolha a operação\n";
        cout << "-----[1] --------------------------------------\n";
        cout << "-----[2] --------------------------------------\n";
        cout << "-----[3] --------------------------------------\n";
        cout << "-----[4] --------------------------------------\n";
        cout << "-----[5] --------------------------------------\n";
        cout << "-----[6] --------------------------------------\n";
        cout << "-----[7] --------------------------------------\n";
        cout << "-----[8] --------------------------------------\n";
        cout << "-----[9] --------------------------------------\n";
        cout << "-----[10] -------------------------------------\n";
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
            case 4:
            int v[10];
            for (i=0; i<10; i++){
                cout << "escreva o valor eeposicao " << i << endl;
                cin >> v[i];
            }
            for (int i=9; i>0; i--) cout << v[i] << endl;
            break;
            case 5:
                for(int i=0; i<9; i++)
                    for(int j=i+1; i<10; j++)
                        if(v[i]==v[3]) cout << v[i] << endl;

        
    