#include <stdio.h>

int main() {

    // ==========================
    // MOVIMENTO DA TORRE (for)
    // ==========================
    // A Torre move-se em linha reta — neste caso, 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita %d\n", i);
    }

    printf("\n"); // Linha em branco para separar as seções

    // ==========================
    // MOVIMENTO DO BISPO (while)
    // ==========================
    // O Bispo move-se na diagonal — neste caso, 5 casas para cima e à direita.
    int casasBispo = 5;
    int contador = 1;

    printf("Movimento do Bispo:\n");
    while (contador <= casasBispo) {
        printf("Cima, Direita %d\n", contador);
        contador++;
    }

    printf("\n");

    // ==========================
    // MOVIMENTO DA RAINHA (do-while)
    // ==========================
    // A Rainha pode mover-se em qualquer direção — neste caso, 8 casas para a esquerda.
    int casasRainha = 8;
    int passo = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda %d\n", passo);
        passo++;
    } while (passo <= casasRainha);

    printf("\nSimulação concluída!\n");

    return 0;
}