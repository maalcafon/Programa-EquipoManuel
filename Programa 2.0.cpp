#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int espacios;
	char texto[100];
	
	cout<<"Bienvenido usuario(a) al este contador de palabras y oraciones"<<endl;
	cout<<"- Porfavor, ingrese algun texto que quiera evaluar:  "<<endl;
	gets(texto);
	
	espacios=strlen(texto);
	int cont=0, i=0;
	
	while(i<espacios){
		while(i<espacios && texto[i]== ' '){
			i=i+1;
		}
		
		if(i<espacios){
			cont=cont+1;
		}
		
		while(i<espacios && texto[i]!=' '){
			i=i+1;
		}
	}
	
cout<<"- Usuario(a) la cantidad de palabras obtenidas son:"<<cont;
	cout<<"\nY la cantidad de oraciones son: 1"<<endl;
	
	return 0;
}
