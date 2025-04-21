#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao {
private:
    int volume;
    int canal;

public:
    Televisao();  // Construtor

    // Métodos para controle de volume
    void aumentarVolume();
    void diminuirVolume();

    // Métodos para controle de canal
    void aumentarCanal();
    void diminuirCanal();
    void trocarCanal(int novoCanal);

    // Métodos de consulta
    int getVolume() const;
    int getCanal() const;

    // Métodos utilitários
    void exibirStatus() const;
};

#endif
