#include <iostream>
#include "circuito.cpp"

using namespace std;

int main() {
    //Receber os valores pelo usuário
    tCircuito valor;

    cout << "Resistência 1: " << endl;
    cin >> valor.resistencia1;
    cout << "Resistência 2: " << endl;
    cin >> valor.resistencia2;
    cout << "Fonte de tensão: " << endl;
    cin >> valor.tensao;

    valor.calculos();
}