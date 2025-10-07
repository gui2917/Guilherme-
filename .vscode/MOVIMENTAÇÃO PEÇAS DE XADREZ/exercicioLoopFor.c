#include <stdio.h>

int main (){

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        //Nesse caso, a condição if (i % 2 == 0) verifica se i é par. Se for, o valor de i é impresso.
        // O operador % é o módulo (resto da divisão);
        // Se o resto de i / 2 for 0, significa que i é par;
        {
           printf("%d\n", i);
        }
        
    }
    



    return 0; 
}