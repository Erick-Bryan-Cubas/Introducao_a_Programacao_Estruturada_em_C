#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	// Definindo as vari�veis
	int a = 4, 
		opcao = 3;
	
	float b = 2.5;
	char c = 'x';
	
	// Condicional simples
	if(a==5){
		printf("A vari�vel � igual a = 5");
	}
	if(b == 2.5){
		printf("\n A vari�vel b = 2.5");
	}
	if(c == 'x'){
		printf("\n A vari�vel <a> � �mpar");
	} else {
		printf("\n A vari�vel <a> � par");
	}
	
	// N�mero par ou �mpar
	if(a % 2 == 1){
		printf("\n A vari�vel <a> � �mpar");
	} else{
		printf("\n A vari�vel <a> � par");
	}

	// Condicional composta
	if(opcao == 1){
		printf("\n A opcao = 1");
	} else if(opcao ==2){
		printf("\n A opcao = 2");
	} else{
		printf("\n A opcao n�o � igual a <1> e nem <2>");
	}
	
	// Pausa o programa ap�s executar
	return 0;
}
