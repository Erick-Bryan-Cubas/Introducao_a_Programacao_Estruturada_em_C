# VETORES
Em linguagem C, vetores (também chamados de arrays) são uma coleção sequencial de elementos do mesmo tipo, armazenados em posições de memória contíguas. Vetores são uma estrutura de dados fundamental que permite a você armazenar e acessar múltiplos valores usando uma única variável e um índice. Isso facilita a manipulação de conjuntos de dados, como sequências numéricas, caracteres em strings ou até mesmo outras estruturas de dados.

Para declarar um vetor em C, você especifica o tipo de dado, o nome do vetor e o tamanho do vetor entre colchetes:
tipo_de_dado nome_do_vetor[tamanho_do_vetor];

Por exemplo, para criar um vetor de inteiros chamado "numeros" com 5 elementos, você escreveria:
int numeros[5];

Você pode acessar os elementos do vetor usando o nome e o índice correspondente entre colchetes. Os índices começam em 0, portanto, o primeiro elemento está no índice 0, o segundo no índice 1, e assim por diante:
numeros[0] = 42;
numeros[1] = 23;
numeros[2] = 10;
numeros[3] = -7;
numeros[4] = 5;

Também é possível inicializar um vetor durante a declaração, fornecendo os valores entre chaves:
int numeros[] = {42, 23, 10, -7, 5};
Neste caso, o compilador irá determinar automaticamente o tamanho do vetor com base no número de elementos fornecidos