#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "");
	SetConsoleTitle("Questao 7 \n");
	
	int num1=100,num2=3,soma;
	soma = (num1/num2);
	printf("A divisão dos dois valores é: %d", soma);
	return 0;
}
