<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	// Para usar acentos
	setlocale(LC_ALL, "");
	
	printf("==== Exerc�cio 1 - Crie um algoritmo que leia 2 notas e mostre a m�dia entre elas ==== \n");
	
	// Definindo as vari�veis
	float nota_1 = 0,
	 	  nota_2 = 0;
	 	  
	// Solicitando ao usu�rio para digitar as notas
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);
	
	printf("\n Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	// Imprimindo a m�dia das duas notas. USE V�RGULAS
	printf(" \n A m�dia das notas �: %f", ((nota_1 + nota_2)/2));	
	
	return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//Imprime Ol�
	printf("Ol� \n");
	
	//Lendo valor inteiro
	int a = 50;
	printf("O valor de <a> � = %d \n", a);
	// <&> Endere�o da mem�ria
	printf("Digite um n�mero: \n");
	scanf("%d", &a);
	printf("O valor de <a> mudou para %d \n", a);
	
	//Lendo valor quebrado
	float b = 5.5;
	printf("O valor de <b> � = %f \n", b);
	printf("Digite um n�mero: \n");
	scanf("%f", &b);
	printf("O valor de <b> mudou para %2.f \n", b);
	
	
	
	//Lendo letra
	char letra = 't';
	printf("O valor de <c> � = %c \n", letra);
	printf("Digite uma letra: \n");
	//Antes de ler valores para char limpe o buffer
	fflush(stdin);
	scanf("%c", &letra);
	printf("O valor de <c> mudou para %c", letra);
	
	
>>>>>>> origin/main
}
