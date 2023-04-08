// Peça ao usuário para inserir um número e verifique se ele é par ou ímpar usando condicionais IF ELSE.
#include<stdlib.h>
#include<stdio.h>

int main(){
int numero;
printf("Digite um numero: %d");
scanf("%d", &numero);

if(numero % 2 == 0){
    printf("O numero %d e par", numero);
}
else {
    printf("E impar");
    }

return 0;


}