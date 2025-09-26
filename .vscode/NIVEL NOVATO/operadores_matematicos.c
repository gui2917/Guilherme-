#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 5;
 
    int soma = a + b;
    //-> Declara soma e atribui a soma dos valores atuais de a e b. Como a=10 e b=5, soma recebe 15;
    int subtracao = a - b;
    //-> Declara subtracao com o resultado a - b → 10 - 5 = 5;
    int multiplicacao = a * b;
    //-> Declara subtracao com o resultado a - b → 10 - 5 = 5;
    int divisao = a / b;
    // -> Declara divisao com a / b;
    //Importante: aqui é divisão inteira (tipo int), então 10 / 5 = 2; 
    //Se a divisão não fosse exata (ex.: 10 / 3) o resultado seria truncado para 3;
    
    a += 2;
    //-> Operador composto: a += 2 equivale a a = a + 2. Como a era 10, agora passa a 12 

    b *= 3;
    //-> b *= 3 equivale a b = b * 3. b era 5, agora passa a 15.
    
    a++;
    //O ++ é o operador de incremento em C;
    //Ele soma 1 ao valor da variável; 
 
    
    printf("Soma: %d\n", soma);
    //-> Imprime texto no console. "%d" é o especificador para inteiro e será substituído por soma (15);
   
    printf("Subtração: %d\n", subtracao);
    //-> Imprime subtracao (5);
    printf("Multiplicação: %d\n", multiplicacao);
    //-> Imprime multiplicacao (50);
    printf("Divisão: %d\n", divisao);
    //-> Imprime divisao (2);
    printf("Novo valor de a (após += 2 e ++): %d\n", a);
    //O %d vai ser substituído pelo valor atual de a;
    //No seu programa, a começou em 10, depois:
    // a += 2; → a = 12;
    // a++; → a = 13; → ++ é o operador de incremento, ele aumenta o valor da variável em 1;

    printf("Novo valor de b (após *= 3 e --): %d\n", b);
    //Esse operador *= é uma forma encurtada de escrever: b = b * 3;
    //b--; → O -- é o operador de decremento;
    //Ele subtrai 1 do valor da variável;
    
 
    return 0;
}