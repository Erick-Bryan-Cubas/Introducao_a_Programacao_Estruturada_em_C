#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
    //Para usar acentos
    setlocale(LC_ALL, "");
    //Para titular o programa
    SetConsoleTitle("EXERCÍCIO 10");

    //Enunciado
    printf("Crie um  algoritmo que leia 3 valores para um vetor de 3 posições e depois calcule a média dos valores acessando o vetor \n");

    float vetor[3];
    printf("Digite um valor:");
    scanf("%f", &vetor[0]);
    printf("Digite um valor:");
    scanf("%f", &vetor[1]);
    printf("Digite um valor:");
    scanf("%f", &vetor[2]);
    printf("\n vetor[0] = %.2f", vetor[0]);
    printf("\n vetor[1] = %.2f", vetor[1]);
    printf("\n vetor[2] = %.2f", vetor[2]);
    printf("\n A média dos valores é: %.2f", (vetor[0],+vetor[1], vetor[2]/3));

return 0;

}

