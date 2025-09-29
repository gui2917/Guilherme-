#include <stdio.h>

int main (){

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\nCRIANDO CARTAS DESAFIO SUPER TRUNFO - NÍVEL NOVATO\n");
    printf("------------------------------------------------------------\n");
    printf("======Carta 1=======\n");

    printf("\nDigite o Estado (A-H):");
    scanf(" %c", &estado1);
    // espaço antes do "%c" evita pegar lixo do ENTER;

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo1);
    //Obs: Em especificador de formato de String "%s", não usa o &, pois é um Array.

    printf("Digite o nome do Estado:\n");
    scanf("%s", cidade1);

    printf("Digite a População:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área em Km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB em Bilhões de Reais:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

     printf("======Carta 2=======\n");

    printf("\nDigite o Estado (A-H):");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome do Estado:\n");
    scanf("%s", cidade2);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área em Km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB em Bilhões de Reais:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    printf("EXIBIÇÃO DOS DADOS\n");

    printf("\n======= CARTA 1 ======\n");

    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

     printf("\n======= CARTA 2 ======\n");

    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);










    return 0;
}