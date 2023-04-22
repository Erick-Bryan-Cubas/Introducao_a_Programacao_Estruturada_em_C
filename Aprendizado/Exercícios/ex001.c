<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	// Para usar acentos
	setlocale(LC_ALL, "");
	
	printf("==== Exercício 1 - Crie um algoritmo que leia 2 notas e mostre a média entre elas ==== \n");
	
	// Definindo as variáveis
	float nota_1 = 0,
	 	  nota_2 = 0;
	 	  
	// Solicitando ao usuário para digitar as notas
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);
	
	printf("\n Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	// Imprimindo a média das duas notas. USE VÍRGULAS
	printf(" \n A média das notas é: %f", ((nota_1 + nota_2)/2));	
	
	return 0;
=======
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
	
	
>>>>>>> origin/main
}
