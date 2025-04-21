#include <iostream>
#include "pessoa.h"

using namespace std;

int main() {
    Pessoa p1("Gustavo", 25, 1.68);

    cout << "Dados iniciais da pessoa:" << endl;
    p1.imprimirDados();

    p1.setNome("Gustavo Sargenti");
    p1.setIdade(28);
    p1.setAltura(1.70);

    cout << "\nDados atualizados da pessoa:" << endl;
    p1.imprimirDados();

    return 0;
}
