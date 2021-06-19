#include <iostream>
#include "circuito.cpp"

using namespace std;

int main() {
    //Receber os valores
    tCircuito valor;
    valor.resistencia1 = 10;
    valor.resistencia2 = 20;
    valor.tensao = 10;
    valor.calculos();
    
}