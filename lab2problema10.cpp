#include<iostream>
using namespace std ;
int main(){
	bool flag = false;int valor =0;
	char NumerosRomanos[7] = { 'M','D','C','L','X','V','I' };string numrom;
	int NumerosArabes[7] = { 1000,500,100,50,10,5,1 };cout<<"Ingresa Numero En Romano\n";cin>>numrom;
	for(int i = 0; numrom[i]!= '\0';i++){// iteramos hasta valor nulo de la cadena
		for(int ii = 0 ; NumerosRomanos[ii] != '\0'; ii++){// itera sobre valores romanos
			if(numrom[i]==NumerosRomanos[ii]){//comprobamos si el cada caractes es valido
			    valor += NumerosArabes[ii];
				flag=true;
			}// si el caracter no es valido ingresar cadena nuevamente , contador se reinicia en 0
		}if(flag==false){
			cout<<" Numero No Valido Ingrsa Nuevamente : ";cin>> numrom;i=-1;
		}
	}cout<< " Su Numero Romano : "<< numrom << " Es Igual a "<<valor <<" En Numero Romano";
	
}
/*int NumerosArabes[7] = { 1000,500,100,50,10,5,1 };
char NumerosRomanos[7] = { 'M','D','C','L','X','V','I' };
int valor = 0;
bool flag = false;
String numrom = "";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Ingresa Numero En Romano");
  while(Serial.available() == 0);
  numrom = Serial.readStringUntil('\n');
  
  for(int i = 0; numrom[i]!= '\0'; i++){// iteramos hasta valor nulo de la cadena
    for(int ii = 0 ; NumerosRomanos[ii] != '\0'; ii++){// itera sobre valores romanos
      if(numrom[i]==NumerosRomanos[ii]){//comprobamos si el cada caractes es valido
        valor += NumerosArabes[ii];
        flag=true;
      }// si el caracter no es valido ingresar cadena nuevamente , contador se reinicia en 0
    }
    if(flag==false){
      Serial.println("Numero No Valido Ingrsa Nuevamente:");
      break;
    }
  }
  if(flag==true){
    Serial.print("Su Numero Romano: ");
    Serial.print(numrom);
    Serial.print(" Es Igual a ");
    Serial.print(valor);
    Serial.println(" En Numero Romano");
  }
  valor = 0;
  flag = false;
}
/*