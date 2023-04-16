/* Preencha uma matriz 2x2 lendo valores do usuário 
e depois troque os valores entre a primeira e a segunda linha.

Como no exemplo:
[1] [2]
[3] [4]

[3] [4]
[1] [2]
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int matriz[2][2], aux1, aux2;

    printf("Defina os valores de uma matriz 2x2 para [0][0]: ");
    scanf("%d", &matriz[0][0]);

    printf("Defina os valores de uma matriz 2x2 para [0][1]: ");
    scanf("%d", &matriz[0][1]);

    printf("Defina os valores de uma matriz 2x2 para [0][0]: ");
    scanf("%d", &matriz[1][0]);

    printf("Defina os valores de uma matriz 2x2 para [0][0]: ");
    scanf("%d", &matriz[1][1]);

    aux1 = matriz[1][0];
    aux2 = matriz[1][1];
    matriz[1][0] = matriz[0][0];
    matriz[1][1] = matriz[0][1];

    printf("\n %d %d", aux1, aux2);
    printf("\n %d %d", matriz[1][0], matriz[1][1]);    


return 0;
}