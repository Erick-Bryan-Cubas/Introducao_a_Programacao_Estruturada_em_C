/* Crie um algoritmo que imprima os nÃºmeros pares de 10 a 20 (usando While, Do While ou For) */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle("EXERC�CIO 8 COM LA�O DE REPETI��O DO WHILE");

    int i=10;
    do{
        if(i % 2 == 0){
            printf("� par: %d \n", i);
        }
        else{
            printf("� impar: %d \n", i);
        }
        i++;
    }
    while(i<=20);

return 0;
}