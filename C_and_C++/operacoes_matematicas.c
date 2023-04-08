#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Função principal do programa
void main(){
	// Configurando o programa para permitir acentuação
	setlocale(LC_ALL,"");
	
	printf(" ==== Operações Matemáticas com a Linguagem C ==== \n");
	
	// Definindo Variáveis
	int a = 6, b = 3;
	
	// Soma
	printf("\n A soma de %d e %d = %d", a, b, a + b);
	
	// Subtração
	printf("\n A subtração de %d e %d = %d", a, b, a - b);
	
	// Divisão
	printf("\n A divisão de %d e %d = %d", a, b, a / b);
	
	// Multiplicação
	printf("\n A multiplicação de %d e %d = %d", a, b, a * b);
	
	// Resto da divisão
	printf("\n O resto da divisão entre %d e %d = %d", a, b, a % b);
	
	// O valor absoluto das variáveis. Valor absoluto é o maior que uma variável pode assumir
	printf("\n O valor absoluto das variáveis <a> e <b> são %d e %d, respectivamente \n", abs(a), abs(b));
	
	// Pausa o programa após executar
	system("pause");
}
