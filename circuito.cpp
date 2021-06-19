#include <iostream>
#include <iomanip>

using namespace std;

//Estrutura que recebe os dados iniciais
struct tCircuito {
    float resistencia1;
    float resistencia2;
    int tensao;
};

//Estrutura que realiza os cálculos e imprime o resultado
struct iResultado {
    float rserie, rparalelo, corrente, potencia;
    tCircuito entrada;
    
    //Funcao para calcular os parametros
    void calculos(tCircuito entrada) {
        float r1 = entrada.resistencia1;
        float r2 = entrada.resistencia2;
        int v = entrada.tensao; 
    
        rserie = r1 + r2;
        rparalelo = (r1 * r2)/(r1 + r2);
        corrente = v / rserie;
        potencia = corrente * v;
        imprimir();
    }

    //Impressao dos resultados
    void imprimir() {
        cout << fixed << setprecision(2);
        cout << "-------------- Resultado --------------" << endl << endl;
        cout << "Resistência em série:    " << rserie << " Ω."<< endl;
        cout << "Resistência em paralelo: " << rparalelo << " Ω."<< endl;
        cout << "Corrente total em série: " << corrente << " A."<< endl;
        cout << "Potência na fonte:       " << potencia <<" W" << endl;
    }
};