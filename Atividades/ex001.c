#include <stdio.h>
int main()
{
   int idade;
   int sexo;
   int somaM = 0;
   int somaF = 0;
   int cont = 0;
   float somaIdade=0;
   while(cont < 10){
       printf("Entre com a idade do morador: \n");
       scanf("%d",&idade);
       somaIdade=somaIdade+idade;
       printf("Entre com o sexo 1 para feminino e 2 para masculino:");
       scanf("%d",&sexo);
       if(sexo == 1){ somaF=somaF+1;}
       else if(sexo == 2){somaM=somaM+1;}
       else{printf("Sexo não cadastrado...");
       somaIdade=somaIdade-idade;
       cont--;
       }
       cont=cont+1;
   }
   printf("A média das idade é: %.2f \n", somaIdade/10);
   printf("A quantidade de mulheres é: %d \n",somaF);
   printf("A quantidade de homens é: %d \n",somaM);
}