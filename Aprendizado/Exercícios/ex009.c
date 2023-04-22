#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){

    setlocale(LC_ALL, "");
    SetConsoleTitle("EXERCÍCIO  9 - É NUMERO PRIMO?");

    int i;

    printf("Digite um número inteiro: ");
    scanf("%d", i);

    if(i % 1){
        printf("O número %d é primo!", i);
    }
    else {if(i % i){
        printf("O número %d é primo!", i);
    }
    else{
        printf("O número %d não é primo!", i);
    }
        }

return 0;
}