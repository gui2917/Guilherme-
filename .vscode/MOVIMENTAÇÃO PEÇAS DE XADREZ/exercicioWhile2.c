#include <stdio.h>

int main (){

    int num;

    printf("Digite um número (negativo para sair):\n");
    scanf("%d", &num);

   while (1) { 
// Começa um loop infinito;
//A condição 1 sempre é verdadeira → o loop só termina se usar break;

    if (num < 0){
    //Para detectar números negativos e sair do loop com break;
        printf("Número negativo detectado! Saindo...\n");
        break; // sai do loop

        }else if (num == 0)
        //Se o número for exatamente 0, mostra uma mensagem de erro pedindo outro número;
        //O loop continua depois.

        {

        printf("Zero não é permitido! Por favor, digite outro número:\n");

        }else{
        //Se o número for positivo, mostra o valor digitado normalmente;

        printf("Você digitou: %d\n", num);
        }

        printf("Digite um número (negativo para sair):\n");
        scanf("%d", &num);
        
        }
    
    





    return 0;
}