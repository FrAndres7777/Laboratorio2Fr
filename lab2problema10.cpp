#include<iostream>
using namespace std ;
int main(){
	bool flag = false;int valor =0;
	char NumerosRomanos[7] = { 'M','D','C','L','X','V','I' };string numrom;
	int NumerosArabes[7] = { 1000,500,100,50,10,5,1 };cout<<"Ingresa Numero En Romano\n";cin>>numrom;
	for(int i = 0; numrom[i]!= '\0';i++){
		for(int ii = 0 ; NumerosRomanos[ii] != '\0'; ii++){
			if(numrom[i]==NumerosRomanos[ii]){
			    valor += NumerosArabes[ii];
				flag=true;
			}
		}if(flag==false){
			cout<<" Numero No Valido Ingrsa Nuevamente : ";cin>> numrom;i=-1;
		}
	}cout<< " Su Numero Romano : "<< numrom << " Es Igual a "<<valor <<" En Numero Romano";
	
}
