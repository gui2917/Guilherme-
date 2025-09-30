#include <stdio.h>

int main (){

    int i = 1;
    //Declara uma variável inteira chamada i e inicializa com o valor 1;

    while (i <= 5)
    //Inicia um loop que verifica a condição i <= 5 antes de cada repetição;
    //Se a condição for verdadeira, o bloco entre { ... } é executado; se for falsa, o loop termina;
    {
       printf("%d\n", i);
       //Mostra o valor atual de i no console;
       i ++;
       //Incrementa i em 1 (equivalente a i = i + 1). Isso faz o contador avançar para a próxima iteração;
       
    }
    

    return 0;
}