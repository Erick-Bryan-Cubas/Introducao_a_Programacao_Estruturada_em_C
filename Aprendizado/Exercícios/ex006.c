#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
	
	setlocale(LC_ALL, "");
	SetConsoleTitle("PROGRAMA DESEVOLVIDO POR ERICK BRYAN CUBAS");
    printf("\t Curso Completo de Linguagem C e C++ - Iniciante Ao Avançado\n");
    printf("\t Instrutor: John Haste");
	
	printf(" ==== Exercício 6 - Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case) de 4 opções \n"
	" 1 - Somar, \n 2 - Subtrair, \n 3 - Dividir, \n 4 - Multiplicar \n"
	"Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida com os dois valores lidos. \n");
	
	float operador_1,
		  operador_2;
		  
	int operacao;
		 
	printf(" Digite o primeiro operador: ");
	scanf("%f", &operador_1);
	
	printf("\n Digite o segundo operador: ");
	scanf("%f", &operador_2);
	
	printf("\n Qual opera??o matem?tica deseja aplicar? \n"
	" 1 - Somar, \n 2- Subtrair, \n 3 - Dividir, \n 4 - Multiplicar \n");
	scanf("%d", &operacao);
	
	switch(operacao){
		case 1:
			printf("O usu?rio realizou a <SOMA> entre os operadores, sendo o resultado: %5.2f", operador_1 + operador_2);
			break;
		case 2:
			printf("O usu?rio realizou a <SUBTRAÇÃO> entre os operadores, sendo o resultado: %5.2f", operador_1 - operador_2);
			break;
			
		case 3:
			printf("O usuário realizou a <DIVISÃO> entre os operadores, sendo o resultado: %5.2f", operador_1 / operador_2);
			break;
		
		case 4:
			printf("O usu?rio realizou a <MULTIPLICAÇÃO> entre os operadores, sendo o resultado: %5.2f", operador_1 * operador_2);
			break;
		
		default:
			printf("Opção inválida!");
			break;
	}
	
	
return 0;
}
