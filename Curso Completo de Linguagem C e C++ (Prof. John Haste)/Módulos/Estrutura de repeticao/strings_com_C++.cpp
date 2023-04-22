#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

// Função principal do programa
int main(){
    std::string palavra;
    printf("Digite uma palavra");
    std::cin >> palavra;
    std::cout << palavra;

    // Pausa o programa após executar
    system("pause");
}