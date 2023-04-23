#include <stdio.h>

int main() {
   FILE *arquivo;
   int idade = 25;
   float altura = 1.75;
   char nome[] = "Joao";

   arquivo = fopen("dados.txt", "w");
   fprintf(arquivo, "Nome: %s\nIdade: %d anos\nAltura: %.2f metros", nome, idade, altura);
   fclose(arquivo);
   
   return 0;
}
