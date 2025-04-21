#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo {
private:
    double raio;
    double centro_x;
    double centro_y;

    double calcularArea() const;
    double calcularCircunferencia() const;
    double calcularDistancia(const Circulo& outro) const;

public:
    Circulo();

    void definirRaio(double r);
    void aumentarRaio(double percentual);
    void definirCentro(double x, double y);

    void imprimirRaio() const;
    void imprimirCentro() const;
    void imprimirArea() const;
    void imprimirCircunferencia() const;
    void imprimirDistancia(const Circulo& outro) const;
};

#endif
