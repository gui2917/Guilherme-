#include <stdio.h>

    int main (){

        for (int i = 1; i <= 30; i++) 
        // int 1 = inicialização | i <= 30 = condição | i++ = incremento;
        // Inicialização = Executada uma vez no início do loop. É geralmente usada para declarar e inicializar a variável de controle do loop;
        // Condição = Avaliada antes de cada iteração. Se a condição for verdadeira, o bloco de código dentro do for é executado. Se for falsa, o loop termina;
        // Incremento = Executado após cada iteração do bloco de código. É usado para atualizar a variável de controle;
        {
            printf("%d\n", i);
        }
        

        return 0;
    }

//Ele imprime os números de 1 até 30, um em cada linha.
//Isso acontece porque o "for" vai repetir o bloco { printf("%d\n", i); } até a condição deixar de ser verdadeira.