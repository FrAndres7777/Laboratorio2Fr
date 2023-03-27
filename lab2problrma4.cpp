#include<iostream>
using namespace std;
int main(){
	int multiplo=10,entero=0;
	char valor[10];
	cout<<" Ingresa En STRING tu VALOR : ";cin>> valor;
	for(int i =2; valor[i] != '\0';  i++){multiplo*= 10;
	}
	for(int i= 0 ; valor[i] != '\0';i++){
		for(int j= 48,contador=0;j <= 57;j++,contador++){
			if(valor[i]==j){
				entero += contador*multiplo;multiplo/=10;
			}
		}
	}
	cout<<" El Valor Fue Convertido A Entero : "<<entero;
}