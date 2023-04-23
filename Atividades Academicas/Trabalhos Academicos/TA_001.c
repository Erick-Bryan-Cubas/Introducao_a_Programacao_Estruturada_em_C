#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int main() {

    setlocale(LC_ALL,"");
    SetConsoleTitle("PROGRAMA DESENVOLVIDO POR ERICK BRYAN");
    printf("===== CENTRO DE ENSINO ESTÁCIO DE SÁ =====\n");

    float salario, total = 0, valor_pago, percentual;

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    for(int i=1; i<=10; i++) {
        printf("Digite o salario do funcionario %d: ", i);
        scanf("%f", &salario);
        valor_pago = salario * (1 + percentual/100); // adiciona o percentual de aumento
        total += valor_pago; // adiciona o valor pago ao total
        printf("Valor a ser pago ao funcionario %d: R$ %.2f\n", i, valor_pago);
    }

    printf("O valor total a ser pago aos funcionarios e: R$ %.2f", total);

    return 0;
}
