#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	// Definindo as vari�veis
	int a = 5, b = 10, c = 15;
	char d = 'x';
	
	// Maior
	if(a > 2){
		printf("\n %d � maior que 2", a);
	}
	
	// Maior ou igual
	if(c >= b){
		printf("\n %d � maior ou igual que %d", c, b);
	}
	
	// Menor
	if(a < 10){
		printf("\n A vari�vel %d � menor que 10", a);
	}
	
	// Menor ou igual
	if(a <= 10){
		printf("\n %d � menor ou igual a 10", a);
	}
	
	// Diferente
	if(c != 10){
		printf("\n A vari�vel %d � diferente de 10", c);
	}
	if(d != 'a'){
		printf("\n A vari�vel %c n�o � 'a' ", d);
	}
		
	// Pausa o programa ap�s executar
return 0;
}
