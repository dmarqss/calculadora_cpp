#include <iostream>
#include <cstdlib>
#define linha cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n"

using namespace std;
void soma(float *point, float n1, float n2){
    *point = n1 + n2;
}

void subtracao(float *point, float n1, float n2){
    *point = n1 - n2;
}

void divisao(float *point, float n1, float n2){
    *point = n1 / n2;
}

void multiplicacao(float *point, float n1, float n2){
    *point = n1 * n2;
}





int main() {
    while(true){
        char parada;
        int operacao;
        float n1,n2,result;

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
            soma(&result,n1,n2);
            break;
        case 1:
            subtracao(&result,n1,n2);
            break;
        case 2:
            multiplicacao(&result,n1,n2);
            break;
        case 3:
            divisao(&result,n1,n2);
            break;
        }

        cout << "RESULTADO: " << result;
        linha;
        cout << "QUER CONTINUAR S/N: ";
        cin >> parada;
            if (parada == 'n') {
                break;
        }
    }
}

