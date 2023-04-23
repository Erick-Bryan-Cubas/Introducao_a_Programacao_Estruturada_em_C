#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Definindo a função
void funcao(){
    printf("----- \n");
}

int main(){

    setlocale(LC_ALL, " ");
    

    // Chamando a função
    funcao();

    printf("Declaramos a função e em seguida a chamamos \n");

    // Chamando a função
    funcao();


return 0;

}