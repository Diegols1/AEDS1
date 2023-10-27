#include <iostream>
using namespace std;

int main() {
    int numeroBoi, numeroBoiMagro, numeroBoiGordo;
    double pesoBoi, pesoBoiMagro, pesoBoiGordo;
    string simnao;

    numeroBoiMagro = 0;
    numeroBoiGordo = 0;
    pesoBoiMagro = 99999.0; // Inicializa o peso do boi mais magro com um valor alto
    pesoBoiGordo = 0.0;     // Inicializa o peso do boi mais gordo com zero

    for (numeroBoi = 1; numeroBoi <= 90; numeroBoi++) {
        cout << "Informe o peso do boi " << numeroBoi << ": ";
        cin >> pesoBoi;
        // Verifica se o peso do boi é o maior até agora
        if (pesoBoi > pesoBoiGordo) {
            pesoBoiGordo = pesoBoi;
            numeroBoiGordo = numeroBoi;
        }

        // Verifica se o peso do boi é o menor até agora
        if (pesoBoi < pesoBoiMagro) {
            pesoBoiMagro = pesoBoi;
            numeroBoiMagro = numeroBoi;
        }
        cout <<"Deseja Continuar?";
        cin >> simnao;
        if (simnao != "sim" && simnao != "SIM" ){
            numeroBoi=91;
        }
    }

    cout << "O boi mais magro é o boi de número " << numeroBoiMagro << " com peso " << pesoBoiMagro << " kg." << endl;
    cout << "O boi mais gordo é o boi de número " << numeroBoiGordo << " com peso " << pesoBoiGordo << " kg." << endl;

    return 0;
}
