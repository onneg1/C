#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2;
    float maior, menor, media, soma=0, produto=0;

    printf("Escolha o primeiro numero");
    scanf("%i", &n1);

    printf("Escolha o segundo numero");
    scanf("%i", &n2);

    soma = n1 + n2;
    produto = n1 * n2;
    media = soma / 2;

    if (maior > menor) {
        maior = n1;
        menor = n2;
    }
    else {
        maior = n2;
        menor = n1;
    }
     

    printf("Soma: %.1f \n", soma);
    printf("Produto: %.1f \n", produto);
    printf("Media: %.1f \n", media);
    printf("Maior numero: %.1f \n", maior);
    printf("Menor numero: %.1f \n", menor);

    return 0;
}