#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	// Para usar acentos
	setlocale(LC_ALL, "");
	
	// Declarando as variáveis
	int a = 10;
	
	// Conectivo lógico E(AND) / Se uma comparação for falsa, não entra no bloco
	if(a > 5 && a < 15){
		printf("\n A variável 'a' está entre 5 e 15 ");
	}
		
	// Conectivo lógico OU(OR) / Se uma comparação for verdadeira, entra no bloco
	if(a > 5 || a < 15){
		printf("\n A variável 'a' é maior que 5 ou 15 ");
	}
	
	// Misturando os conectivos
	if( (a > 5 && a < 15) || a == 20){
		printf("\n A variável 'a' está entre 5 e 15 ou é 20");
	}
	
return 0;
	
}
