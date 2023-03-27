#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int list[200];// creamos lista con los valores pedido
	int cont,letra=65,letrastotales=0;srand(time(NULL));// generador aleatorio
	for(int i=0,numero; i<200 ;i++){
		numero = rand() % (90 - 65 + 1) + 65;
		list[i]=numero;
		cont=0;
	    }// ciclo para contar veces repetidas letras
		while(letra<= 90){
		    cont=0;
			for(int j = 0; j < 200 ;j++){
				if(letra == list[j]){cont++;
				}
			}letrastotales+=cont;
			cout<<(char)letra<<" : "<<cont<<endl;
			letra++;
		}cout<< "letras de el arreglo en total = "<< letrastotales;
}
