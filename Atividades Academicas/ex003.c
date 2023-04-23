// Peça ao usuário para inserir um número e, em seguida, exiba todos os números de 1 até o número inserido usando um laço WHILE.
#include <stdio.h>

int main() {
    int i = 1, num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Números de 1 até %d:\n", num);

    while (i <= num) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
