#include <iostream>
using namespace std;
bool valDupli(int arr[], int n) {// comprobar valotres repetidos
    bool iguales = true;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] != arr[i+1]) {
            iguales = false;
            break;
        }
    }
    if(iguales) {
        return true;
    }
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
	int n ;cout<<" Ingresa El Orden DE Tu Matriz nXn:  ";cin>> n;
	int list[n*n];
	bool bandera = true;
	int matriz[n][n];
	int valoresfcd[(n*n)-1];
	int cont = 0,d1=0,d2=0;
	cout<< " Ingresa FILA A FILA  Tu Matriz (separados por espacios) \n";
	for(int i = 0,ii=0; i < n;i++){//ingresamos fila a fila
		cout<< " Ingresa Fila "<<i+1<< " : " ;
		for(int j = 0 ; j < n ; j++){
			cin>>matriz[i][j];
			if( bandera){
				for(int c =0; list[c] <n*n;c++){// cclo de valores ingresados
					if(matriz[i][j]== list[c]){// si el digito ya fue ingresado no dentra a siguiente filtro
						bandera = false;
					}
				}
			}list[ii]=matriz[i][j];ii++;
		}
	}
		for(int i = 0; i < n;i++){cout<<endl;// imprimis la matriz para dar imagen por consola
		for(int j = 0 ; j < n ; j++){
			cout<<matriz[i][j]<<" ";	
		}
	}
	if(bandera){
		for(int fila=0 ,valorf; fila < n  ;fila++){// filtro para filas
			valorf=0;
			for(int colum = 0 ; colum < n ; colum++){
				valorf += matriz[fila][colum];	
			}
			valoresfcd[cont]=valorf;// valores de filas se agregan
			cout<<endl<<"valor fila "<<valorf;
			cont++;
		}cout<<endl;
		for(int colum = 0 , valorc ; colum< n  ; colum++){// filtro para columnas 
			valorc=0;
			for(int fila= 0; fila<n ; fila++){
				valorc+= matriz[fila][colum];
			}
			valoresfcd[cont]= valorc;// valores de columnas se agregan
			cout<< valorc<< " valor columna\n";cont++;	
		
	}

	cout<< endl<<endl;
	for(int base1 =0, base2 = n-1; base1 <= (n*n)-1; base1+=n+1,base2+= (n-1)){// sumamos las diagonales
		d1+=list[base1];
		d2+=list[base2];
	}valoresfcd[cont]=d1; valoresfcd[++cont]=d2;
	if(valDupli(valoresfcd,cont)){// comprobamos que las sumas de valores de filas , colum , diagomales sean ==
		cout<<" cuadrado magico";
	}else{
		cout<<"No es Cuadrado Magico";
	}

	}
	else{
		cout<<"No es Cuadrado Magic1o";
	}
	
}
	

