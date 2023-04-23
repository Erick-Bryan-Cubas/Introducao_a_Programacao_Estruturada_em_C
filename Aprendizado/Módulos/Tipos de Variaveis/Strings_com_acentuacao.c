#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Configurar a localização

    printf("Olá, mundo! Á é uma letra acentuada.\n");

    return 0;
}
