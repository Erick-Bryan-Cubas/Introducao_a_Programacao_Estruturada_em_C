#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#define TAM 3

int main(){

    setlocale(LC_ALL, "");
    SetConsoleTitle("VETORES");

    int vetor[TAM], cont;

    // Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // Adicionando 1 para cada posi��o
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] =  vetor[cont] + 1;
    }

    // Exibindo os valores do vetor
    printf("\n Posi��o 0: %d", vetor[0] );
    printf("\n Posi��o 1: %d", vetor[1] );
    printf("\n Posi��o 2: %d", vetor[2] );

    // Imprimindo vetor em um la�o de repeti��o
    for(cont = 0; cont < 3; cont++){
        printf("\n Posi��o %d : %d \n", cont, vetor[cont] );
    }

    // Lendo 3 valores para o valor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

    // Imprimindo vetor em um la�o de repeti��o
    for(cont = 0; cont < 3; cont++){
        printf("\n Posi��o %d : %d", cont, vetor[cont] );
    }


return 0;

}