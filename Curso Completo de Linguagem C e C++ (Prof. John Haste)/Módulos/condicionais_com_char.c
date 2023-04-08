#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
//Função principal do programa
void main(){
 	
 	setlocale(LC_ALL, "");
    //Definindo Variáveis
    char letra = 'x';
 
    //Condicional Simples
    if(letra == 'x'){
        printf("\nA letra é x.");
    }
 
    //Código em ASCII
    printf("\nCodigo da letra = %d", letra);
 
    //Comparando Código ASCII
    if(letra == 120){
         printf("\n A letra é x.");
    }
 
    //Pausa o programa após executar
    system("pause");
 
}

