#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){

    setlocale(LC_ALL, "");
    SetConsoleTitle("DEFININDO N�MEROS PRIMOS");

    int i, valor, aux;

    printf("Digite um valor para saber se ele � primo: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        if(valor % i == 0){
            aux++;
        }
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
    }

    if(aux ==2){
        printf("O n�mero � primo!");
    }else{
        printf("O n�mero n�o � primo!");
    }

}