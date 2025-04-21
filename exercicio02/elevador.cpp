#include "elevador.h"
#include <iostream>

using namespace std;

Elevador::Elevador(int andares, int capacidade) {
    this->capacidade = capacidade;
    this->andares = andares;
    this->andar_atual = 0;
    this->pessoas_presentes = 0;
}

void Elevador::entra() {
    if (pessoas_presentes >= capacidade) {
        cout << "ELEVADOR CHEIO" << endl;
    } else {
        pessoas_presentes++;
    }
}

void Elevador::remover() {
    if (pessoas_presentes > 0) {
        pessoas_presentes--;
    } else {
        cout << "ELEVADOR VAZIO" << endl;
    }
}

void Elevador::subir() {
    if (andar_atual < andares) {
        andar_atual++;
    } else {
        cout << "ULTIMO ANDAR" << endl;
    }
}

void Elevador::descer() {
    if (andar_atual == 0) {
        cout << "TERREO" << endl;
    } else {
        andar_atual--;
    }
}

int Elevador::getCapacidade() const {
    return capacidade;
}

int Elevador::getAndares() const {
    return andares;
}

int Elevador::getPessoas_Presentes() const {
    return pessoas_presentes;
}

int Elevador::getAndar_Atual() const {
    return andar_atual;
}
