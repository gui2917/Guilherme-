#include <stdio.h>

int main() {


    printf("====== MOVIMENTO DA TORRE ======\n\n");

    int movimento_Torre = 5;

    for (int i = 1; i <= movimento_Torre; i++)
    {
        printf("Direita\n");
    }

    printf("\n====== MOVIMENTO DO BISPO ======\n\n");

    int movimento_Bispo = 1; int quantidade_casasBispo = 5;

    while (movimento_Bispo <= quantidade_casasBispo)
    {
        printf("Cima, Direita\n");
        movimento_Bispo++;
    }

    printf("\n====== MOVIMENTO DA RAINHA ======\n\n");

    int movimento_Rainha = 1; int quantidade_casasRainha = 5;

    do
    {
        printf("Esquerda\n");
        movimento_Rainha++;
    } while (movimento_Rainha <= quantidade_casasRainha);
    

    return 0;
}