#include <iostream>
#include "relogio.h"

using namespace std;

int main() {
    Relogio relogio;
    relogio.setHorario(23, 59, 58);

    for (int i = 0; i < 5; i++) {
        relogio.exibirHorario();
        relogio.tick();
    }

    int h, m, s;
    relogio.getHorario(h, m, s);
    cout << "\nHorário final: " << h << ":" << m << ":" << s << endl;

    return 0;
}
