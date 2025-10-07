#include <stdio.h>

    int main (){


        //numero é o número que o usuário quer a tabuada.
        //i é o contador do loop, vai de 0 até 10.
        int numero; int i;

        printf("Digite um número para calcularmos a tabuáda:\n");
        scanf("%d", &numero);
        //Lê o número digitado pelo usuário;

        for (i = 0; i <= 10; i++)
        //Loop que vai de i = 0 até i = 10;
        //i++ significa que a cada repetição i aumenta em 1;
        {
            printf("%d x %d = %d\n", i, numero, i * numero);
            //Imprime o resultado da multiplicação de numero por i;
        }



        return 0;
    }