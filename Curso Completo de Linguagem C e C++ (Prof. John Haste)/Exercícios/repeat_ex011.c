#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "");

    int matriz[2][2];
    
    printf("Digite um valor para [0][0]: ");
    scanf("%d", &matriz[0][0]);

    printf("Digite um valor para [0][1]: ");
    scanf("%d", &matriz[0][1]);

    printf("Digite um valor para [1][0]: ");
    scanf("%d", &matriz[1][0]);

    printf("Digite um valor para [0][1]: ");
    scanf("%d", &matriz[1][1]);

    printf("\n%d %d", matriz[0][0], matriz[0][1]);
    printf("\n%d %d", matriz[1][0], matriz[1][1]);

return 0;

}