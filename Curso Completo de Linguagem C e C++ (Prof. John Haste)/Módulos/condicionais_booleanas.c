#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>
 
//Fun��o principal do programa
void main(){
 
 	setlocale(LC_ALL, "");
   //Definindo Vari�veis
   bool a = true, b = false;
 
   //Se A for verdadeiro
   if(a){
        printf("\n A � verdadeiro");
   }
 
   //Comparando o B
   if(b){
     printf("\n B � verdadeiro");
   }else{
     printf("\n B � falso");
   }
 
   //Comprando uma falsidade
   if(!b){
     printf("\n B � falso");
   }
 
    //Pausa o programa ap�s executar
    system("pause");
 
}
