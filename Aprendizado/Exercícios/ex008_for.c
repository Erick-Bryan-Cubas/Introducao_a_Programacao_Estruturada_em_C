/* Crie um algoritmo que imprima os nÃƒÂºmeros pares de 10 a 20 (usando While, Do While ou For) */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle("EXERCÍCIO 8 COM LAÇO DE REPETIÇÃO FOR");

    int i;

    for(i =10; i <=20; i++){
        if(i % 2 == 0){
            printf("é par: %d \n", i);
        }
        else{
            printf("é impar: %d \n", i);
        }
    }
return 0;
}