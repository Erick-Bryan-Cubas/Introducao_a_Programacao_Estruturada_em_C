#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	// Para usar acentos
	setlocale(LC_ALL, "");
	
	// Declarando as vari�veis
	int a = 10;
	
	// Conectivo l�gico E(AND) / Se uma compara��o for falsa, n�o entra no bloco
	if(a > 5 && a < 15){
		printf("\n A vari�vel 'a' est� entre 5 e 15 ");
	}
		
	// Conectivo l�gico OU(OR) / Se uma compara��o for verdadeira, entra no bloco
	if(a > 5 || a < 15){
		printf("\n A vari�vel 'a' � maior que 5 ou 15 ");
	}
	
	// Misturando os conectivos
	if( (a > 5 && a < 15) || a == 20){
		printf("\n A vari�vel 'a' est� entre 5 e 15 ou � 20");
	}
	
return 0;
	
}
