/* Crie um algoritmo que imprima os números pares de 10 a 20 (usando While, Do While ou For) */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle("EXERC�CIO 8 COM LA�O DE REPETI��O USANDO O WHILE");

    int i = 10;
    while(i<=20){
        if(i % 2 == 0){
            printf(" � par: %d \n", i);
        } 
        else{
            printf(" � impar: %d \n", i);
            }
    i++;
    }

return 0;
}