#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "");
	SetConsoleTitle("Questao 3 \n");
	
	float ab1=10, ab2=4;
	printf("A média das notas do aluno é: %.1f", (ab1+ab2/2));
	return 0;
}
