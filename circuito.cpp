#include <iostream>

using namespace std;

//Estrutura que recebe os dados iniciais
struct tCircuito {
    float resistencia1;
    float resistencia2;
    int tensao;
};

//Estrutura que guarda os calculos realizados
struct tResultado {
    float rserie;
    float rparalelo;
    float corrente;
    float potencia;
};

void imprimir(tResultado x) {
    cout << "Resistência em série: " << x.rserie << endl;
    cout << "Resistência em paralelo: " << x.rparalelo << endl;
    cout << "Corrente total em série: " << x.corrente << endl;
    cout << "Potência na fonte: " << x.potencia << endl;
}

//Função que calcula os parametros
void calculo() {
    tCircuito valor;
    tResultado calculo;

    float r1 = valor.resistencia1;
    float r2 = valor.resistencia2;
    int v = valor.tensao;
    
    //Calculo resistencias em serie
    calculo.rserie = r1 + r2;

    //Calculo resistencia em paralelo
    calculo.rparalelo = (r1*r2)/(r1+r2);

    //Calculo da corrente
    calculo.corrente = v / calculo.rserie;

    //Calculo da potência
    calculo.potencia = calculo.corrente * v;

    imprimir(calculo);

}