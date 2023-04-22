#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){

    setlocale(LC_ALL, "");
    SetConsoleTitle("CONTAGEM REGRESSIVA COM DO WHILE");

    int i; 
    for(i = 0; i <= 10; i++){

        printf("\n %d", i);
    }
return 0;
}