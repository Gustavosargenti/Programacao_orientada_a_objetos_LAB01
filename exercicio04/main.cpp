#include <iostream>
#include "circulo.h"

using namespace std;

int main() {
    Circulo c1, c2;

    c1.definirRaio(5);
    c1.definirCentro(1.0, 2.0);

    c2.definirRaio(3);
    c2.definirCentro(7.0, 6.0);

    cout << "Círculo 1:" << endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();
    c1.imprimirCircunferencia();

    cout << endl << "Círculo 2:" << endl;
    c2.imprimirRaio();
    c2.imprimirCentro();
    c2.imprimirArea();
    c2.imprimirCircunferencia();

    cout << endl;
    c1.imprimirDistancia(c2);

    cout << endl << "Aumentando o raio do círculo 1 em 20%..." << endl;
    c1.aumentarRaio(20);
    c1.imprimirRaio();
    c1.imprimirArea();

    return 0;
}
