#include<iostream>
using namespace std ;
int main(){
char palabra[15];
	cout << "Ingrese Palabra: ";cin >> palabra;
	for (int i = 0; palabra[i] != '\0'; i++) {//iterar hasta valor nulo
		if (palabra[i] <= 122 and palabra[i] >= 97) {// rango encontrar minusculas
			palabra[i] -= 32;
		}
	}
	cout << endl << "\nAll Palabras Mayusculas: " << palabra << endl;
	return 0;
}
