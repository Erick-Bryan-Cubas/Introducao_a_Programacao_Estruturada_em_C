#include <stdio.h>

int main() {
   FILE *arquivo;
   int c;

   arquivo = fopen("dados_teste_001.txt", "r");
   if (arquivo == NULL) {
      printf("Erro ao abrir o arquivo.\n");
      return 1;
   }

   while ((c = fgetc(arquivo)) != EOF) {
      putchar(c);
   }

   fclose(arquivo);
   return 0;
}

// O código acima lê e exibe o conteúdo de um arquivo de texto de forma caractere por caractere usando a função fgetc().