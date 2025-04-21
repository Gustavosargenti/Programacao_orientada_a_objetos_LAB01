#include "pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string nome, int idade, float altura) {
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

string Pessoa::getNome() {
    return nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

int Pessoa::getIdade() {
    return idade;
}

void Pessoa::setAltura(float altura) {
    this->altura = altura;
}

float Pessoa::getAltura() {
    return altura;
}

void Pessoa::imprimirDados() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;
}
