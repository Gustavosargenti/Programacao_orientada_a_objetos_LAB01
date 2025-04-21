#include <iostream>
#include "televisao.h"

using namespace std;

int main() {
    Televisao tv;

    cout << "TV LIGADA:" << endl;
    tv.exibirStatus();

    cout << "\nVOLUME +4" << endl;
    tv.aumentarVolume();
    tv.aumentarVolume();
    tv.aumentarVolume();
    tv.aumentarVolume();
    tv.exibirStatus();

    cout << "\nVOLUME -2" << endl;
    tv.diminuirVolume();
    tv.diminuirVolume();
    tv.exibirStatus();

    cout << "\nCANAL 57" << endl;
    tv.trocarCanal(57);
    tv.exibirStatus();

    cout << "\nCANAL +2" << endl;
    tv.aumentarCanal();
    tv.aumentarCanal();
    tv.exibirStatus();

    cout << "\nCANAL -5" << endl;
    tv.diminuirCanal();
    tv.diminuirCanal();
    tv.diminuirCanal();
    tv.diminuirCanal();
    tv.diminuirCanal();
    tv.exibirStatus();

    cout << "\nCANAL INVÁLIDO (-1 e 100)" << endl;
    tv.trocarCanal(-1);  
    tv.trocarCanal(76); 
    tv.exibirStatus();

    return 0;
}
