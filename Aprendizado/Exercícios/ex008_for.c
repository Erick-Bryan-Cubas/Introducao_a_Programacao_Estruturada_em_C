/* Crie um algoritmo que imprima os nÃºmeros pares de 10 a 20 (usando While, Do While ou For) */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle("EXERC�CIO 8 COM LA�O DE REPETI��O FOR");

    int i;

    for(i =10; i <=20; i++){
        if(i % 2 == 0){
            printf("� par: %d \n", i);
        }
        else{
            printf("� impar: %d \n", i);
        }
    }
return 0;
}