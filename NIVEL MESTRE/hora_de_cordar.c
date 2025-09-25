#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand (time(0));
    //rand() → é a função que gera números "aleatórios" em C;
    //time(0) → pega o número de segundos do relógio do sistema desde 1º de janeiro de 1970;
    //srand(time(0)) → inicializa o gerador de números aleatórios com o tempo atual, garantindo que cada vez que o programa rodar, os números gerados por rand() sejam diferentes;
    numeroComputador = rand() % 100 + 1;
    //rand() → Gera um número inteiro “aleatório”;
    // % 100 (módulo) → O operador % pega o resto da divisão do número por 100;
    //+ 1 → Ajusta o intervalo, antes o resultado era de 0 a 99, depois do +1 fica de 1 a 100;

    printf("======BEM VINDO AO JOGO!======\n");
    printf("Você deve escolher o número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite um número (entre 1 e 100)\n");
    scanf("%d", &numeroJogador);

    printf("O número do computador é %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M': 
    case 'm':
        printf("Você escolheu a opção Maior\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        // condição "?"" valor_se_verdadeiro ":" valor_se_falso;
        // O "?"" significa: “se a condição for verdadeira, use este valor”;
        // O ":" significa: “senão, use aquele valor";
       
        
        break;

    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;

        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção igual\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;

        break;
    
    default:
        printf("Opção Inválida!\n");

        break;
    }

        printf("O número do computador é %d e o número do jogador é %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("Você venceu, Parabéns!\n");
    } else {
        printf("Você perdeu, Infelizmente!");
    }
    




    return 0;
}