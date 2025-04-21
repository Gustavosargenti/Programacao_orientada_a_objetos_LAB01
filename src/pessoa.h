#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    float altura;

public:
    Pessoa(string nome, int idade, float altura);

    void setNome(string nome);
    string getNome();

    void setIdade(int idade);
    int getIdade();

    void setAltura(float altura);
    float getAltura();

    void imprimirDados();
};

#endif 