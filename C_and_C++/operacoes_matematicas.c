#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Fun��o principal do programa
void main(){
	// Configurando o programa para permitir acentua��o
	setlocale(LC_ALL,"");
	
	printf(" ==== Opera��es Matem�ticas com a Linguagem C ==== \n");
	
	// Definindo Vari�veis
	int a = 6, b = 3;
	
	// Soma
	printf("\n A soma de %d e %d = %d", a, b, a + b);
	
	// Subtra��o
	printf("\n A subtra��o de %d e %d = %d", a, b, a - b);
	
	// Divis�o
	printf("\n A divis�o de %d e %d = %d", a, b, a / b);
	
	// Multiplica��o
	printf("\n A multiplica��o de %d e %d = %d", a, b, a * b);
	
	// Resto da divis�o
	printf("\n O resto da divis�o entre %d e %d = %d", a, b, a % b);
	
	// O valor absoluto das vari�veis. Valor absoluto � o maior que uma vari�vel pode assumir
	printf("\n O valor absoluto das vari�veis <a> e <b> s�o %d e %d, respectivamente \n", abs(a), abs(b));
	
	// Pausa o programa ap�s executar
	system("pause");
}
