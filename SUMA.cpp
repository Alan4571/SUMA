/*1. Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas, Posteriormente mostrar la matriz en pantalla.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas;
	int valores=0, suma;
	int cont=0;
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
	//Rellenando la matriz	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}

	cout<<"\nMostrando La sumatoria\n\n";
	for(int i=0;i<filas;i++){
 	for(int j=0;j<columnas;j++){
 	cout<<numeros[i][j]<< "+";
 	valores += numeros[i][j];
 	
 }
 }
	cout<<"="<<valores<<"\n";
	
	int i=2;
 		if(valores==1){
  			cout<<"\nEl numero "<<valores<<" no es primo"<<endl;
		}
 		if(valores==2){
  			cout<<"\nEl numero "<<valores<<" es primo"<<endl;
 		}else{
  		while(i<valores){
   			if(valores%i==0){
    			cout<<"\nEl numero "<<valores<<" no es primo"<<endl;
    	break;
   		}else{
    		cont++;
   		}
   			i++;
  		}
  		if(cont==valores-2){
   			cout<<"\nEl numero "<<valores<<" es primo"<<endl;
  		}
  	}
	getch();
	return 0;
}
