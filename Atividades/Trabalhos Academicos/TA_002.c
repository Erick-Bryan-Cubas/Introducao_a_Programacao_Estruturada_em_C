#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define MAX_CIDADES 4 // Variável Constante

int main() {
    
    setlocale(LC_ALL,"");
    SetConsoleTitle("PROGRAMA DESENVOLVIDO POR ERICK BRYAN");
    printf("===== CENTRO DE ENSINO ESTÁCIO DE SÁ =====\n");

    char tem_veiculo[4];
    char cidade[30];
    int sem_veiculo[MAX_CIDADES] = {0};
    bool continuar = true;

    while (continuar) {
        printf("Tem veiculo proprio? [S/N] ");
        scanf("%s", tem_veiculo);

        if (strcmp(tem_veiculo, "S") == 0) {
            continue;
        }

        printf("Digite a cidade onde mora [Goiânia, Trindade, Aparecida, Canedo]: ");
        scanf("%s", cidade);

        if (strcmp(cidade, "Goiânia") == 0) {
            sem_veiculo[0]++;
        } else if (strcmp(cidade, "Trindade") == 0) {
            sem_veiculo[1]++;
        } else if (strcmp(cidade, "Aparecida") == 0) {
            sem_veiculo[2]++;
        } else if (strcmp(cidade, "Canedo") == 0) {
            sem_veiculo[3]++;
        } else {
            printf("Cidade inválida. Por favor, digite uma cidade válida.\n");
            continue;
        }

        printf("Deseja adicionar informacoes sobre outra pessoa? [S/N] ");
        char resposta[4];
        scanf("%s", resposta);
        if (strcmp(resposta, "N") == 0) {
            continuar = false;
        }
    }

    printf("\nQuantidade de pessoas sem veiculo em cada cidade:\n");
    printf("Goiânia: %d\n", sem_veiculo[0]);
    printf("Trindade: %d\n", sem_veiculo[1]);
    printf("Aparecida: %d\n", sem_veiculo[2]);
    printf("Canedo: %d\n", sem_veiculo[3]);

    printf("\nRecomendamos formar parceria com empresa de transporte nas seguintes cidades:\n");
    for (int i = 0; i < MAX_CIDADES; i++) {
        if (sem_veiculo[i] > 5) {
            switch (i) {
                case 0:
                    printf("- Goiânia\n");
                    break;
                case 1:
                    printf("- Trindade\n");
                    break;
                case 2:
                    printf("- Aparecida\n");
                    break;
                case 3:
                    printf("- Canedo\n");
                    break;
            }
        }
    }

    return 0;
}
