#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "");
	SetConsoleTitle("Questao 2 \n");
	
	int numero = 35;
	printf("%d", numero%2);
	return 0;
}
