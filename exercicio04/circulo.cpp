#include <iostream>
#include <cmath>
#include "circulo.h"

using namespace std;

Circulo::Circulo() {
    raio = 0;
    centro_x = 0;
    centro_y = 0;
}

double Circulo::calcularArea() const {
    return M_PI * raio * raio;
}

double Circulo::calcularCircunferencia() const {
    return 2 * M_PI * raio;
}

double Circulo::calcularDistancia(const Circulo& outro) const {
    double dx = centro_x - outro.centro_x;
    double dy = centro_y - outro.centro_y;
    return sqrt(dx * dx + dy * dy);
}

void Circulo::definirRaio(double r) {
    if (r >= 0) {
        raio = r;
    }
}

void Circulo::aumentarRaio(double percentual) {
    if (percentual >= 0) {
        raio += raio * (percentual / 100.0);
    }
}

void Circulo::definirCentro(double x, double y) {
    centro_x = x;
    centro_y = y;
}

void Circulo::imprimirRaio() const {
    cout << "Raio: " << raio << endl;
}

void Circulo::imprimirCentro() const {
    cout << "Centro: (" << centro_x << ", " << centro_y << ")" << endl;
}

void Circulo::imprimirArea() const {
    cout << "Área: " << calcularArea() << endl;
}

void Circulo::imprimirCircunferencia() const {
    cout << "Circunferência: " << calcularCircunferencia() << endl;
}

void Circulo::imprimirDistancia(const Circulo& outro) const {
    cout << "Distância entre centros: " << calcularDistancia(outro) << endl;
}
