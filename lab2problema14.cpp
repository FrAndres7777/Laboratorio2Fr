#include<iostream>
using namespace std;
void rotar(int matriz[5][5],int matrizrotar[5][5]){// funcion para rotar matriz 90 grados
	for(int i = 4,io=0,val=1;i>=0; i--,io++){
		for(int j= 0,jo=0;j<5; j++,jo++){
 			matrizrotar[j][i]=matriz[io][jo];// escribir desde la ultima columna hasta la 1
 		}  
 	}for(int i = 0;i<5; i++){cout<<endl;// se imprime la matriz rotada
  		for(int j= 0;j<5; j++){
   			cout<<matrizrotar[i][j]<<" ";
  		}  
 	}cout<<endl;
}
int main(){
 int matriz[5][5];int matriz9[5][5];
 int matriz18[5][5];int matriz27[5][5];
 for(int i = 0,val=1;i<5; i++){// creamos matriz origina con valores de 1-25 en orden
  for(int j= 0;j<5; j++){
   matriz[i][j]=val;val++; 
  }
 }for(int i = 0;i<5; i++){cout<<endl;// se imprime matriz origin
  		for(int j= 0;j<5; j++){
   			cout<<matriz[i][j]<<" ";
  		}  
 	}cout<<endl;
 rotar(matriz,matriz9); rotar(matriz9,matriz18); rotar(matriz18,matriz27);
}
