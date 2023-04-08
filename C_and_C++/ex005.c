#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	// Para usar acentos
	setlocale(LC_ALL, "");
	
	printf(" ==== Exercício 5 - Crie um algorítmo que leia 3 valores e informe se eles são iguais entre si para \n \t"
	"formarem os de um triângulo equilatátero \n");
	
	float lado_1,
		  lado_2,
		  lado_3;
	
	printf("Digite o valor do primeiro lado do triângulo: ");
	scanf("%f", &lado_1);
	
	printf("Digite o valor do primeiro lado do triângulo: ");
	scanf("%f", &lado_2);
	
	printf("Digite o valor do primeiro lado do triângulo: ");
	scanf("%f", &lado_3);
	
	if(lado_1 == lado_2 && lado_2 == lado_3 && lado_3 == lado_1){
		printf("Com bases nos tamanhos %5.2f, %5.2f e %5.2f, o triângulo é equilátero", lado_1, lado_2, lado_3);
	} else {
		printf("O triângulo não é equilátero!");
	}
	
return 0;
}
