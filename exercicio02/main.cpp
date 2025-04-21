#include <iostream>
#include "elevador.h"

using namespace std;

int main() {
    Elevador parametros(5, 8);
    parametros.subir();
    parametros.subir();
    parametros.entra();
    parametros.entra();
    parametros.subir();
    parametros.entra();
    parametros.entra();
    parametros.descer();
    parametros.remover();

    cout << "Andar Atual: " << parametros.getAndar_Atual() << endl;
    cout << "Andares: " << parametros.getAndares() << endl;
    cout << "Capacidade: " << parametros.getCapacidade() << endl;
    cout << "Pessoas presentes: " << parametros.getPessoas_Presentes() << endl;

    return 0;
}
