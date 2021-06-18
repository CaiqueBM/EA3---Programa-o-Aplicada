#include <iostream>

using namespace std;

struct tCircuito {
    float resistencia1;
    float resistencia2;
    int tensao;
};

struct tResultado {
    float rserie;
    float rparalelo;
    float corrente;
    float potencia;
};


void calculo() {

    tCircuito valor;
    tResultado teste;

    float r1 = valor.resistencia1;
    float r2 = valor.resistencia2;
    int v = valor.tensao;
    
    //Calculo resistencias em serie
    teste.rserie = r1 + r2;

    //Calculo resistencia em paralelo
     teste.rparalelo = (r1*r2)/(r1+r2);

     //Calculo da corrente
     teste.corrente = v / teste.rserie;

    //Calculo da potência
    teste.potencia = teste.corrente * v;

}