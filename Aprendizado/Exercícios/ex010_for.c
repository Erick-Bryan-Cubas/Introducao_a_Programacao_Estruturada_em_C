#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main (){

    int tamanho;
    printf("Qual será o tamanho do vetor?");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;
    int i;
    for(i = 0; i < tamanho; i++){ 
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma+=vetor[i];
    }
    for(i=0; i<tamanho; i++){
        printf("\n vetor[%d] = %.2f", i, vetor[i]);
    }
    printf("\n A média dos valores é: %.2f", soma/tamanho);
}