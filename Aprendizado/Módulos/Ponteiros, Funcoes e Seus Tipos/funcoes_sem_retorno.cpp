#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Definindo a fun��o
void funcao(){
    printf("----- \n");
}

int main(){

    setlocale(LC_ALL, " ");
    

    // Chamando a fun��o
    funcao();

    printf("Declaramos a fun��o e em seguida a chamamos \n");

    // Chamando a fun��o
    funcao();


return 0;

}