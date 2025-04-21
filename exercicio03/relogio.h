#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio {
private:
    int hora;
    int minuto;
    int segundo;

public:
    Relogio();

    void setHorario(int h, int m, int s);
    void getHorario(int &h, int &m, int &s);
    void tick();
    void exibirHorario();
};

#endif
