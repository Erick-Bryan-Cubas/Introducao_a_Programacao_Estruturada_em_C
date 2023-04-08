#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	printf(" ==== Exercício 3 - Crie um algoritmo que leia 3 números inteiros de uma só vez e coloque os resultado da multiplicação entre os 3 em uma variável própria, depois exiba essa variável. ==== \n");
	
	// Declarando as variáveis
	int num_1,
	    num_2,
	    num_3;
	
	// Requisitando ao usuário para definir os valores das variáveis
	printf("Digite os três números: ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	// Declarando a variável com o valor absoluto
	int valor_absoluto = abs(num_1 * num_2 * num_3);
	
	// Imprimindo os resultados
	printf("O resultado do valor absoluto resultante com a multiplicação das variáveis %d, %d e %d é %d", num_1, num_2, num_3, valor_absoluto);
	
return 0;
	
	
	
	
	
}
