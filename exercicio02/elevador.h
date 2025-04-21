#ifndef ELEVADOR_H
#define ELEVADOR_H

class Elevador {
private:
    int andar_atual;
    int andares;
    int capacidade;
    int pessoas_presentes;

public:
    Elevador(int andares, int capacidade);

    void entra();
    void remover();
    void subir();
    void descer();

    int getCapacidade() const;
    int getAndares() const;
    int getPessoas_Presentes() const;
    int getAndar_Atual() const;
};

#endif
