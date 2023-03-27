#include<iostream>
using namespace std;
int main(){
	int multiplo=10,entero=0;
	char valor[10];// cadena caracteres a convertir
	cout<<" Ingresa En STRING tu VALOR : ";cin>> valor;// ciclo que itera hasta valor nulo
	for(int i =2; valor[i] != '\0';  i++){multiplo*= 10;// funcion expecial para tener el tamaño en unidades de cadena
	}//
	for(int i= 0 ; valor[i] != '\0';i++){// sacamos digito a digito
		for(int j= 48,contador=0;j <= 57;j++,contador++){
			if(valor[i]==j){//  multiplo decrecera en multiplos de 10 concorde a unidades del digito
				entero += contador*multiplo;multiplo/=10;// sumamos y hacemos conversion en numero y contador
			}
		}
	}
	cout<<" El Valor Fue Convertido A Entero : "<<entero;
}