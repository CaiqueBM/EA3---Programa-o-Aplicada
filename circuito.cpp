#include <iostream>

using namespace std;

//Estrutura que recebe os dados iniciais
struct tCircuito {
    float resistencia1;
    float resistencia2;
    int tensao;
    float rserie, rparalelo, corrente, potencia;

        void calculos() {
            rserie = resistencia1 + resistencia2;
            rparalelo = (resistencia1 * resistencia2)/(resistencia1 + resistencia2);
            corrente = tensao / rserie;
            potencia = corrente * tensao;
            imprimir();
    }


    void imprimir() {
        cout << "---------------------------------------------" << endl;
        cout << "-------------- Resultado --------------------" << endl;
        cout << "Resistência em série: " << rserie << endl;
        cout << "Resistência em paralelo: " << rparalelo << endl;
        cout << "Corrente total em série: " << corrente << endl;
        cout << "Potência na fonte: " << potencia << endl;
}





};