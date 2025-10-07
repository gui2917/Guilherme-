#include <stdio.h>  
// Inclui a biblioteca padrão de entrada e saída, necessária para printf() e scanf()

int main() {
    // Função principal onde o programa começa a execução

    int numero; // Variável que armazenará o número escolhido pelo usuário
    int i;      // Variável de controle do loop (contador)

    // Solicita ao usuário que digite um número
    printf("Digite um número para calcularmos a tabuada:\n");

    // Lê o número digitado e armazena na variável 'numero'
    scanf("%d", &numero);

    // Loop 'for' que vai de i = 0 até i = 10
    for (i = 0; i <= 10; i++) {
        // A cada repetição, imprime a multiplicação do número pelo contador i
        // Exemplo: se numero = 5, imprime 0x5=0, 1x5=5, ..., 10x5=50
        printf("%d x %d = %d\n", i, numero, i * numero);
    }

    // Finaliza o programa retornando 0 (indica sucesso)
    return 0;
}

/*
Explicação detalhada do Fluxo:

1. Programa pede um número ao usuário;
2. Lê o número com scanf().
3. O for começa com i = 0 e repete até i = 10;
4. A cada repetição, imprime o resultado da multiplicação do número pelo contador i;
5. Quando i chega a 11, o loop termina e o programa finaliza;


*/