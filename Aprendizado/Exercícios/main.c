/* Crie um programa que realize a operacao de soma com a funcao incluida em outro arquivo */

#include <stdio.h>
#include <stdlib.h>
#include "soma.h"

int main(){
    int a, b;

    // Definindo as variaveis
    a = 10;
    b =  23;

    imprimeSoma(&a, &b);

return 0;
}