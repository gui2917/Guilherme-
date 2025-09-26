#include <stdio.h>

int main (){

    int i = 1;

    do
    //Começa o loop do...while;
    //Diferente do while, o do...while executa o bloco pelo menos uma vez, antes de verificar a condição;
    {
        printf("%d\n", i);
        i++;
    //Incrementa i em 1 (i = i + 1);
    //Essencial para que o loop não fique infinito;

    } while (i <= 5);
    //Fecha o bloco do "do...while"
    //A condição (i <= 5) é verificada após a execução do bloco;
    //Se a condição for verdadeira, o loop recomeça; se for falsa, o programa continua depois do do...while;
    
    //while (i == 5); 
    //O == é uma comparação, não uma atribuição;
    //Esse loop vai repetir enquanto i for igual a 5.
    //PROBLEMA:
    //Se i já for 5 e você não mudar o valor de i dentro do loop, ele vai ficar em loop infinito, porque i nunca deixa de ser 5;
    //Se i não for 5 no início, o loop nem executa, porque a condição é falsa;
    
    //O que é Loop Infinito:
    //Um loop infinito é um laço que nunca termina, ou seja, o programa continua repetindo o mesmo bloco de código para sempre.
    //Isso acontece quando a condição do loop nunca se torna falsa;



    
    return 0;
}