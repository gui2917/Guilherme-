#include <stdio.h>

    int main (){

        int numero;
        
        //Início do loop do...while;
        //Um do...while executa o bloco pelo menos uma vez e depois verifica a condição no final para repetir;
        do
        {
            printf("Digite um número par para sair do programa:\n");
            //Mostra a mensagem para o usuário no terminal pedindo um número;
            scanf("%d", &numero);
            //Lê o número digitado pelo usuário e armazena na variável número;
            //O & é necessário porque scanf precisa do endereço da variável para guardar o valor;

            if (numero % 2 == 0)
            {
                printf("O número %d é par\n", numero);

            } else {

                printf("O número %d é ímpar\n", numero);
            }
            //Verifica se o número é par ou ímpar;
            //numero % 2 == 0 → se o resto da divisão por 2 for 0, o número é par, se não é ímpar;
    
            
        

        } while (numero % 2 != 0);

        printf("Você digitou um número par, saindo do programa...\n");

        //Fecha o bloco do do...while;
        //O loop continua enquanto o número for ímpar (numero % 2 != 0);
        //Ou seja, o usuário precisa digitar um número par para sair;
        



        return 0;
    }

    /* ====== Resumo do Fluxo do Programa: ======

        1. Pergunta um número para o usuário;
        2. Mostra se é Par ou Ímpar;
        3. Repete a pergunta enquanto o número for ímpar;
        4. Termina quando o usuário digita um número par; 
        
        */