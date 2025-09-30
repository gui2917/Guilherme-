#include <stdio.h>

int main() {
    int option;

    do {
        // Menu principal
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);

        // Tratamento das opções
        switch(option) {
            case 1:
                printf("Você escolheu a Opção 1\n\n");
                break;
            case 2:
                printf("Você escolheu a Opção 2\n\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção Inválida!\n\n");
        }

    } while(option != 3);  // Repete enquanto a opção não for 3

    return 0;
}