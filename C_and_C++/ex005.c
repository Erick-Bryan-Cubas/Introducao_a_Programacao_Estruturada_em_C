#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	// Para usar acentos
	setlocale(LC_ALL, "");
	
	printf(" ==== Exerc�cio 5 - Crie um algor�tmo que leia 3 valores e informe se eles s�o iguais entre si para \n \t"
	"formarem os de um tri�ngulo equilat�tero \n");
	
	float lado_1,
		  lado_2,
		  lado_3;
	
	printf("Digite o valor do primeiro lado do tri�ngulo: ");
	scanf("%f", &lado_1);
	
	printf("Digite o valor do primeiro lado do tri�ngulo: ");
	scanf("%f", &lado_2);
	
	printf("Digite o valor do primeiro lado do tri�ngulo: ");
	scanf("%f", &lado_3);
	
	if(lado_1 == lado_2 && lado_2 == lado_3 && lado_3 == lado_1){
		printf("Com bases nos tamanhos %5.2f, %5.2f e %5.2f, o tri�ngulo � equil�tero", lado_1, lado_2, lado_3);
	} else {
		printf("O tri�ngulo n�o � equil�tero!");
	}
	
return 0;
}
