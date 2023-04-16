#include <stdio.h>
#include <stdlib.h>
 
//Função principal do programa
void main(){
 
    //Variáveis
    char palavra[10];
 
    //Instrução
    printf("Digite uma palavra");
 
    //Limpa o Buffer
    setbuf(stdin, 0);
 
    //Lê a String
    fgets(palavra, 255, stdin);
    
  /* Na memória a palavra PIZZA ficaria assim, se estivessemos estipulado o vetor de 8 casas de memória:
  [P] [I] [Z] [Z] [A] [ ] [ ] [ \0]*/
    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';
 
    //Imprime na tela
    printf("%s", palavra);
 
    //Pausa o programa após executar
    system("pause");

}