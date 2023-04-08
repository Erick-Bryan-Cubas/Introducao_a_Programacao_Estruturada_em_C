#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	printf("==== Exercício 2 - Crie um algoritmo que leia duas notas e mostre o valor absoluto da diferença entre elas ====");
	
	// Declarando as variáveis
	float nota_1,
		  nota_2;
	
	// Requisitando ao usuário para digitar o valor das variáveis
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	// Valor absoluto da diferença entre as variáveis
	float valor_absoluto = abs(nota_1 - nota_2);
	
	// Imprimindo os resultados
	printf("O valor absoluto da diferença entre as notas %f e %f é %f", nota_1, nota_2, valor_absoluto);	
	
	return 0;
}


