#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
//Fun��o principal do programa
void main(){
 	
 	setlocale(LC_ALL, "");
    //Definindo Vari�veis
    char letra = 'x';
 
    //Condicional Simples
    if(letra == 'x'){
        printf("\nA letra � x.");
    }
 
    //C�digo em ASCII
    printf("\nCodigo da letra = %d", letra);
 
    //Comparando C�digo ASCII
    if(letra == 120){
         printf("\n A letra � x.");
    }
 
    //Pausa o programa ap�s executar
    system("pause");
 
}

