#include <iostream>

using namespace std;

int main() {
	int n ;cout<<" Ingresa El Orden DE Tu Matriz nXn:  ";cin>> n;
	
	int matriz[n][n];
	cout<< " Ingresa FILA A FILA  Tu Matriz (separados por espacios ) \n";
	for(int i = 0; i < n;i++){
		cout<< " Ingresa Fila "<<i+1<< " : " ;
		for(int j = 0 ; j < n ; j++){
			cin>>matriz[i][j];
			
		}
	}
		for(int i = 0; i < n;i++){
			cout<<endl;
		for(int j = 0 ; j < n ; j++){
			cout<<matriz[i][j]<<" ";
			
		}
	
	}
}