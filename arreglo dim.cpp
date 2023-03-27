#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
	int list[10];
	srand(time(NULL));
	for(int i=0,numero; i<10 ;i++){
		numero = rand() % (90 - 65 + 1) + 65;
		cout<<(char)numero<<endl;
		list[i]=numero;
	}
	for(int j = 0; j < 10 ;j++){
		cout<<endl<<list[j]<<endl;
	}
	
}
