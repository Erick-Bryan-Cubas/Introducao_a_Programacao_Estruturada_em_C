#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){

    setlocale(LC_ALL, "");
    SetConsoleTitle("EXERC�CIO  9 - � NUMERO PRIMO?");

    int i;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", i);

    if(i % 1){
        printf("O n�mero %d � primo!", i);
    }
    else {if(i % i){
        printf("O n�mero %d � primo!", i);
    }
    else{
        printf("O n�mero %d n�o � primo!", i);
    }
        }

return 0;
}