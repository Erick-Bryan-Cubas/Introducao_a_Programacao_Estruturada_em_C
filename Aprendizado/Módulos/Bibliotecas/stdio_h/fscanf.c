#include <stdio.h>

int main() {
   FILE *arquivo;
   int idade;
   float altura;
   char nome[50];

   // arquivo = fopen("C:/documentos/dados.txt", "r");
   // O 'r' é um dos modos de abertura de arquivos que pode ser especificado como segundo argumento da função fopen().
   arquivo = fopen("dados.txt", "r");
   fscanf(arquivo, "Nome: %s\nIdade: %d anos\nAltura: %f metros", nome, &idade, &altura);
   fclose(arquivo);

   printf("Nome: %s\nIdade: %d anos\nAltura: %.2f metros", nome, idade, altura);

   return 0;
}
