#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	printf(" ==== Exerc�cio 3 - Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez e coloque os resultado da multiplica��o entre os 3 em uma vari�vel pr�pria, depois exiba essa vari�vel. ==== \n");
	
	// Declarando as vari�veis
	int num_1,
	    num_2,
	    num_3;
	
	// Requisitando ao usu�rio para definir os valores das vari�veis
	printf("Digite os tr�s n�meros: ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	// Declarando a vari�vel com o valor absoluto
	int valor_absoluto = abs(num_1 * num_2 * num_3);
	
	// Imprimindo os resultados
	printf("O resultado do valor absoluto resultante com a multiplica��o das vari�veis %d, %d e %d � %d", num_1, num_2, num_3, valor_absoluto);
	
return 0;
	
	
	
	
	
}
