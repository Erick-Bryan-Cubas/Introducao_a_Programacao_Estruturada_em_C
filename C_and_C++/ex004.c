#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	// Para usar acentos
	setlocale(LC_ALL, "");
	
	// Enunciado
	printf(" ==== Exerc�cio 4 - Crie um algoritmo que leia 3 notas e calcule a m�dia entre elas. \n \t"
	 "Se o valor  for maior que 7 informe que o aluno foi aprovado, sen�o foi reprovado ==== \n");
	
	// Definindo as vari�veis 
	float nota_1,
		  nota_2,
		  nota_3;
	
	// Requisitando que o usu�rio defina os valores das vari�veis
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);
	
	printf("\n Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	printf("\n Digite a tericeira nota: ");
	scanf("%f", &nota_3);
	
	float media = ((nota_1 + nota_2 + nota_3) / 3);
	
	if(media >= 7){
		printf("Aluno com nota m�dia %2.2f, aprovado!", media);
	} else {
		printf("Aluno com nota m�dia %2.2f, reprovado!", media);
	}
	
return 0;
}
