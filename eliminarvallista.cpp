#include<iostream>
using namespace std;
int main(){
    char list[10]={'0','1','2','3','4','5','6','7','8','9'};
    int list2[8]={362880,40320,5040,720,120,24,6,2};
    int numero;
    cout << "Ingresa tu numero" << endl;cin >> numero;
    for(int i = 0, digito; i < 8; i++){
        digito = numero / list2[i];
        numero = numero - ((list2[i])*digito);
        if(numero == 0){
            digito = digito - 1;
        }cout << list[digito];
        for(int j = digito; j < 9; j++){
            list[j] = list[j+1];
        }list[9]='\0';
    }
     // Imprimir valores restantes
    if (numero == 1) {
        for (int i = 0; i < 9; i++) {
            cout << list[i];
        }
    } else if (numero == 0) {
        for (int i = 8; i >= 0; i--) {
            cout << list[i];
        }
    }
    return 0;
}
