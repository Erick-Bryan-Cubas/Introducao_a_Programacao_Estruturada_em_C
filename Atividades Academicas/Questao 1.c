#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "");
	SetConsoleTitle("Questao 1 \n");
	
	float valorReal =4.93, real, dolar;
	printf("Digite um valor em dolares para ser convertido: ");
	scanf("%f", &dolar);
	real = (dolar*valorReal);	
	printf("$%.2f é o mesmo que: R$%.2f", dolar,real);
	return 0;
}
