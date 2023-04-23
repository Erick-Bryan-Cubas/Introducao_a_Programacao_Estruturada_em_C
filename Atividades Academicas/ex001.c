#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//Imprime Olá
	printf("Olá \n");
	
	//Lendo valor inteiro
	int a = 50;
	printf("O valor de <a> é = %d \n", a);
	// <&> Endereço da memória
	printf("Digite um número: \n");
	scanf("%d", &a);
	printf("O valor de <a> mudou para %d \n", a);
	
	//Lendo valor quebrado
	float b = 5.5;
	printf("O valor de <b> é = %f \n", b);
	printf("Digite um número: \n");
	scanf("%f", &b);
	printf("O valor de <b> mudou para %2.f \n", b);
	
	
	
	//Lendo letra
	char letra = 't';
	printf("O valor de <c> é = %c \n", letra);
	printf("Digite uma letra: \n");
	//Antes de ler valores para char limpe o buffer
	fflush(stdin);
	scanf("%c", &letra);
	printf("O valor de <c> mudou para %c", letra);
	
	
}
