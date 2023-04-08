#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){

    setlocale(LC_ALL, "");
    SetConsoleTitle("CONTAGEM REGRESSIVA COM DO WHILE");

    int i = 0;
    do{
        printf("\n %d", i);
        i++;
    }
    while(i <= 10);
return 0;
}