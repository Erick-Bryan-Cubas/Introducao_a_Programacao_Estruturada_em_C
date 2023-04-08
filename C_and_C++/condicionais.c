#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	// Definindo as variáveis
	int a = 4, 
		opcao = 3;
	
	float b = 2.5;
	char c = 'x';
	
	// Condicional simples
	if(a==5){
		printf("A variável é igual a = 5");
	}
	if(b == 2.5){
		printf("\n A variável b = 2.5");
	}
	if(c == 'x'){
		printf("\n A variável <a> é ímpar");
	} else {
		printf("\n A variável <a> é par");
	}
	
	// Número par ou ímpar
	if(a % 2 == 1){
		printf("\n A variável <a> é ímpar");
	} else{
		printf("\n A variável <a> é par");
	}

	// Condicional composta
	if(opcao == 1){
		printf("\n A opcao = 1");
	} else if(opcao ==2){
		printf("\n A opcao = 2");
	} else{
		printf("\n A opcao não é igual a <1> e nem <2>");
	}
	
	// Pausa o programa após executar
	return 0;
}
