#include<iostream>
using namespace std ;
int main(){
char palabra[25]; char pal2[25] ;char num[25];
	cout << "Ingrese Palabra: ";cin >> palabra;
	cout<<"original: "<<palabra;
	for (int i = 0, ip=0,in=0; palabra[i] != '\0'; i++) {// iterar hasta valor nulo
		if (palabra[i] > 65 and  palabra[i] < 122) {// rango determinar si es letra
			pal2[ip] = palabra[i];ip++;
		}else if (palabra[i]> 47 and 58>palabra[i]){// rango sis es numero
			num[in]= palabra[i];in++;
		}
	}
	cout << endl << "\nSolo Texto : " << pal2 <<"\nNumeros : "<<num;
	return 0;
}

