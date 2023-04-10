/* Crie um algoritmo que imprima os nÃƒÂºmeros pares de 10 a 20 (usando While, Do While ou For) */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle("EXERCÍCIO 8 COM LAÇO DE REPETIÇÃO DO WHILE");

    int i=10;
    do{
        if(i % 2 == 0){
            printf("é par: %d \n", i);
        }
        else{
            printf("é impar: %d \n", i);
        }
        i++;
    }
    while(i<=20);

return 0;
}