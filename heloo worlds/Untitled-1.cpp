#include <iostream>
#include <locale>

using namespace std;


int main(){
    //declaração de variavel do tipo inteiro
    int n1, n2, n3, n4;

    setlocale(LC_ALL,"pt_BR.UTF-8");

    std::cout<<"Digite o primeiro número\n";
    std::cin >> n1;
    std::cout<<"Digite o segundo número\n";
    std::cin >> n2;
    std::cout<<"Digite o terceiro número\n";
    std::cin >> n3;
    std::cout<<"Digite o quarto número\n";
    std::cin >> n4;
    std::cout<<"os números digitados foram " <<n1 <<"," <<n2 <<"," <<n3 <<" e " <<n4; 
    return 0;
}