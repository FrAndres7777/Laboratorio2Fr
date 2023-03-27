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
/*
char palabra[15];
String palabraMayus = "";

void setup() {
  Serial.begin(9600);
}

void loop() {
  palabraMayus = "";
  Serial.print("Ingrese Palabra: ");
  while (Serial.available() == 0);
  palabraMayus = Serial.readStringUntil('\n');
  
  for (int i = 0; i < palabraMayus.length(); i++) {
    if (palabraMayus[i] <= 122 and palabraMayus[i] >= 97) {
      palabraMayus[i] -= 32;
    }
  }
  Serial.print("\nAll Palabras Mayusculas: ");
  Serial.println(palabraMayus);
}
/*