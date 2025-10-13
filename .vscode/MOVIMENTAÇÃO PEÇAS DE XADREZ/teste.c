#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    char email[50];
    char continuar;
    float peso, altura, imc;
    int anoNascimento;
    int anoAtual = 2025;

    do {
        printf("======CADASTRO DE USUÁRIOS======\n");

        printf("\nDigite seu nome:\n");
        scanf("%s", nome);

        printf("Digite a sua idade:\n");
        scanf("%d", &idade);

        printf("Digite seu e-mail:\n");
        scanf("%s", email);
        
        printf("Digite seu peso em (kg):\n");
        scanf("%f", &peso);

        printf("Digite sua altura (m):\n");
        scanf("%f", &altura);

        // Calculando ano de nascimento e IMC
        anoNascimento = anoAtual - idade;
        imc = peso / (altura * altura);

        // Exibindo cadastro
        printf("\nCADASTRO REALIZADO COM SUCESSO!\n");
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("E-mail: %s\n", email);
        printf("Peso: %.2f kg\n", peso);
        printf("Altura: %.2f m\n", altura);
        printf("Ano de Nascimento: %d\n", anoNascimento);
        printf("IMC: %.2f\n", imc);

        // Classificação do IMC com mensagens amigáveis
        if (imc < 18.5) {
            printf("Classificação: Abaixo do peso - Cuidado com a alimentação!\n");
        } else if (imc >= 18.5 && imc <= 24.9) {
            printf("Classificação: Peso normal - Parabéns, continue assim!\n");
        } else if (imc >= 25 && imc <= 29.9) {
            printf("Classificação: Sobrepeso - Atenção à alimentação e exercícios!\n");
        } else if (imc >= 30 && imc <= 34.9) {
            printf("Classificação: Obesidade Leve - Procure orientação médica!\n");
        } else if (imc >= 35 && imc <= 39.9) {
            printf("Classificação: Obesidade Moderada - Procure acompanhamento médico!\n");
        } else {
            printf("Classificação: Obesidade Grave - Atenção! Procure médico urgentemente!\n");
        }
        
        printf("\nDeseja cadastrar outro usuário? (s/n):\n");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nFinalizando o programa...\n");

    return 0;
}