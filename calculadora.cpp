#include <iostream>
#include <cstdlib>
#define linha cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n"

using namespace std;
float soma(float n1, float n2){
    return n1 + n2;
}

float subtracao(float n1, float n2){
    return n1 - n2;
}

float divisao(float n1, float n2){
    return n1 / n2;
}

float multiplicacao(float n1, float n2){
    return n1 * n2;
}





int main() {
    while(true){
        char parada;
        int operacao;
        float n1,n2,res;
        system("cls");
        linha;
        cout << "CALCULADORA EM C++";
        linha;
        cout << "ESCOLHA A OPERACAO\n\nSOMA +(0) SUBTRACAO -(1) MULTIPLICACAO x(2) DIVISAO /(3)\n";
        cin >> operacao;
        system("cls");
        linha;
        cout << "PRIMEIRO NUMERO: ";
        cin >> n1;
        system("cls");
        linha;
        cout << "SEGUNDO NUMERO: ";
        cin >> n2;
        system("cls");
        linha;
        switch(operacao){
        case 0:
            res = soma(n1,n2);
            break;
        case 1:
            res = subtracao(n1,n2);
            break;
        case 2:
            res = multiplicacao(n1,n2);
            break;
        case 3:
            res = divisao(n1,n2);
            break;
        }

        cout << "RESULTADO: " << res;
        linha;
        cout << "QUER CONTINUAR S/N: ";
        cin >> parada;
            if (parada == 'n') {
                break;
        }
    }
}

