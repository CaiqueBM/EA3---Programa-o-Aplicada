#include <iostream>
#include <iomanip>

using namespace std;

//Estrutura que recebe os dados iniciais
struct tCircuito {
    float resistencia1;
    float resistencia2;
    int tensao;
    float rserie, rparalelo, corrente, potencia;
    

    //Funcao para calcular os parametros
     void calculos() {
        rserie = resistencia1 + resistencia2;
        rparalelo = (resistencia1 * resistencia2)/(resistencia1 + resistencia2);
        corrente = tensao / rserie;
        potencia = corrente * tensao;
        imprimir();
    }

    //Impressao dos resultados
    void imprimir() {
        cout << fixed << setprecision(2);
        cout << "-------------- Resultado --------------" << endl << endl;
        cout << "Resistência em série:    " << rserie << " Ω."<< endl;
        cout << "Resistência em paralelo: " << rparalelo << " Ω."<< endl;
        cout << "Corrente total em série: " << corrente << " A."<< endl;
        cout << "Potência na fonte:       " << potencia <<"  W" << endl;
    }





};