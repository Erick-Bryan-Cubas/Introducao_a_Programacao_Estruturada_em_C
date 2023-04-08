#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	// Definindo as variáveis
	int a = 5, b = 10, c = 15;
	char d = 'x';
	
	// Maior
	if(a > 2){
		printf("\n %d é maior que 2", a);
	}
	
	// Maior ou igual
	if(c >= b){
		printf("\n %d é maior ou igual que %d", c, b);
	}
	
	// Menor
	if(a < 10){
		printf("\n A variável %d é menor que 10", a);
	}
	
	// Menor ou igual
	if(a <= 10){
		printf("\n %d é menor ou igual a 10", a);
	}
	
	// Diferente
	if(c != 10){
		printf("\n A variável %d é diferente de 10", c);
	}
	if(d != 'a'){
		printf("\n A variável %c não é 'a' ", d);
	}
		
	// Pausa o programa após executar
return 0;
}
