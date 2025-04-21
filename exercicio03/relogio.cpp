#include "relogio.h"
#include <iostream>
#include <iomanip>

using namespace std;

Relogio::Relogio() {
    hora = 0;
    minuto = 0;
    segundo = 0;
}

void Relogio::setHorario(int h, int m, int s) {
    if(h >= 0 && h < 24){
        hora = h;
    }else{
        hora = 0;
    }
    if(m >= 0 && m < 60){
        minuto = m;
    }else{
        minuto = 0;
    }
    if(s >= 0 && s < 60){
        segundo = s;
    }else{
        segundo = 0;
    } 
}

void Relogio::getHorario(int &h, int &m, int &s) {
    h = hora;
    m = minuto;
    s = segundo;
}

void Relogio::tick() {
    segundo++;
    if (segundo >= 60) {
        segundo = 0;
        minuto++;
        if (minuto >= 60) {
            minuto = 0;
            hora++;
            if (hora >= 24) {
                hora = 0;
            }
        }
    }
}

void Relogio::exibirHorario() {
    cout << setfill('0') << setw(2) << hora << ":";
    cout << setfill('0') << setw(2) << minuto << ":";
    cout << setfill('0') << setw(2) << segundo << endl;
}
