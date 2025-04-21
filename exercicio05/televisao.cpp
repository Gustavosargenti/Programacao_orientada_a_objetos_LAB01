#include <iostream>
#include "televisao.h"

using namespace std;

Televisao::Televisao() {
    volume = 50; // Volume inicial médio
    canal = 1;   // Canal inicial
}

void Televisao::aumentarVolume() {
    if (volume < 100) {
        volume++;
    }
}

void Televisao::diminuirVolume() {
    if (volume > 0) {
        volume--;
    }
}

void Televisao::aumentarCanal() {
    if (canal < 75) {
        canal++;
    }
}

void Televisao::diminuirCanal() {
    if (canal > 0) {
        canal--;
    }
}

void Televisao::trocarCanal(int novoCanal) {
    if (novoCanal >= 0 && novoCanal <= 75) {
        canal = novoCanal;
    }
}

int Televisao::getVolume() const {
    return volume;
}

int Televisao::getCanal() const {
    return canal;
}

void Televisao::exibirStatus() const {
    cout << "Canal atual: " << canal << " | Volume atual: " << volume << endl;
}
