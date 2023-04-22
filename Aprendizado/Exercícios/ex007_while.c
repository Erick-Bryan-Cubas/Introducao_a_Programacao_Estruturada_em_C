#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle("CONTAGEM REGRESSIVA COM WHILE");

    /* Crie um algoritmo que imprima os números de 10 até 0
    de forma regressiva. (Usando o While)*/

    int i = 0;
    while (i <= 10){
        printf("\n %d", i);
        i++;
    }
return 0;

}