#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Fun��o principal do programa
void main(){
	
	setlocale(LC_ALL, "");
 
    //Definindo Vari�veis
    int a = 2;
    char b = 'y';
 
    //C�digo de exemplo com if
    if(a == 1){
        printf("\n Op��o escolhida: 1");
    }else if(a == 2){
        printf("\n Op��o escolhida: 2");
    }else if(a == 3){
        printf("\n Op��o escolhida: 3");
    }else{
        printf("\n Op��o invalida");
    }
 
    //O mesmo c�digo de cima, adaptado ao Switch
    switch(a){
        case 1:
            printf("\n Op��o escolhida: 1");
            break;
        case 2:
            printf("\n Op��o escolhida: 2");
            break;
        case 3:
            printf("\n Op��o escolhida: 2");
            break;
        default:
            printf("\n Op��o invalida");
            break;
    }
 
    //Switch com Char
    switch(b){
        case 'x':
            printf("\n A letra � x");
            break;
        default:
            printf("\n Op��o invalida");
            break;
    }
 
    //Pausa o programa ap�s executar
    system("pause");
 
}
