Caso dê problema na leitura do char:

Após a leitura de um tipo CHAR quando você aperta ENTER o C entende que você inseriu "\n", dessa forma o próximo SCANF é automaticamente preenchido com um '\n' e por isso não funciona e pula a leitura direto,, de forma que sempre que você usar um scanf de char deve colocar em seguida um getchar() ou fflush(stdin), eu particularmente prefiro getchar, mais simples, exemplo:

scanf("%c", &palavra); //insere a palavra;

getchar(); // limpa o \n do enter e agora no futuro, poderá ler outros chars sem problema.