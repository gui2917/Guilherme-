#include <stdio.h>

    int main (){

        for (int i = 0; i <= 100; i += 10)
        //Inicialização -> Cria a variável i e começa com 0;
        //Condição -> O for vai continuar enquanto i for menor ou igual a 100;
        //Incremento -> Cada vez que o loop repete, soma 10 a i | É o mesmo que i = i + 10;
        {
            printf("%d\n", i);
        }
        



        return 0;
    }