#include <stdio.h>
#include <stdlib.h>

int main()
{

    // declarando variaveis
    float nota1;

    // recebendo dados do usuario

    printf("Digite o numero:");
    scanf("%f", &nota1);

    // condicoes

    if (nota1 == 10)
    {
        printf("Numero e igual a 10!");
    }
    else if (nota1 > 10)
    {
        printf("Maior que 10");
    }
    else if (nota1 < 10)
    {
        printf("Menor que 10");
    }

    return 0;
}
