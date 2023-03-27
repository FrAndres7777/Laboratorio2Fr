#include <iostream>
using namespace std;
int main(){
    int ValorLados,fac1=1,fac2=1;
    cout<<"Ingrese  Valor De la matriz nXn:  ";cin>>ValorLados;
    for(int i = 1; i <= ValorLados*2; i++){//utilizamos formula que se basa en los lados fac1/fac2
    	fac1 *=i;// formula se basa en calcula factoriales fac1 = (lado + lado )!
		if(i<=ValorLados){
			fac2*=(i*i) ;//fac2 = lado!*lado!
		}
	}cout<<"Para una malla de "<<ValorLados<<" x "<<ValorLados<<" puntos hay "<<fac1/fac2<<" caminos."<<endl;
}
