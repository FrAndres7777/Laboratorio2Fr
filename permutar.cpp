#include <iostream>
using namespace std;
int contador(char list[],char i ){int cont=0;

	for(int i = 0; list[i]!= 0 ;i++){
		if(list[i]< i){
			cont ++;
		}
	}cout<<" CONTADOR"<<cont<<endl;
	return cont;
	
}

int main(){
	int numero;int veces;
	int lval[9]{362880,40320,5040,720,120,24,6,2};
	char sac[10];
	char nums[10]={'0','2','3','4','5','6','7','8','9'};
	cin>>numero;
	for(int i = 0 ,cont;numero>1; i++ ){
		veces = numero/lval[i];
		numero = numero - (lval[i]*veces);
		cout<<veces;
		
		sac[i]=veces+48;
		
		cont=contador(sac,nums[veces]);
		cout<<veces+cont;
	
		
			
	}
	
	for(int i = 0,val; sac[i]!= '\0';i++){
		
	}
}
