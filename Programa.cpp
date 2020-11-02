#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int espacios;
	char texto[100];
	
	cout<<"Ingrese texto:  "<<endl;
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
	
	cout<<"La cantidad de palabras es:"<<cont;
	return 0;
}
