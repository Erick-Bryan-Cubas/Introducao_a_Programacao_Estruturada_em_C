#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int main() {

    setlocale(LC_ALL,"");
    SetConsoleTitle("PROGRAMA DESENVOLVIDO POR ERICK BRYAN");
    printf("===== CENTRO DE ENSINO ESTÁCIO DE SÁ =====\n");

    int opcao, total_votos = 0, votos_pizza = 0, votos_mcdonalds = 0, votos_burguerking = 0;

    while (1) {
        printf("Qual é o melhor lanche?\n");
        printf("1 - Pizza Hut\n");
        printf("2 - McDonalds\n");
        printf("3 - Burguer King\n");
        printf("Digite 0 para encerrar a votação.\n");

        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        } else if (opcao == 1) {
            votos_pizza++;
        } else if (opcao == 2) {
            votos_mcdonalds++;
        } else if (opcao == 3) {
            votos_burguerking++;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }

        total_votos++;
    }

    printf("Resultado da votaÃ§Ã£o:\n");
    printf("Pizza Hut: %.2f%%\n", (float) votos_pizza / total_votos * 100);
    printf("McDonalds: %.2f%%\n", (float) votos_mcdonalds / total_votos * 100);
    printf("Burguer King: %.2f%%\n", (float) votos_burguerking / total_votos * 100);

    return 0;
}
