#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () 
{

    float v_p;
    int opcao;
    float v_f;
    float desc;
    int parc;
    float valorParcela;
    

    setlocale (LC_ALL, "portuguese");

    printf ("Digite o valor do produto: ");
    scanf ("%f", v_p);

    printf ("Escolha a opção de pagamento: \n");
    printf ("1 - Pagamento a vista\n");
    printf ("2 - Pagamento a prazo\n");
    scanf ("%i", ¨&opcao);

    switch (opcao){
        case 1 :
        desconto = v_p * 0.1;
        v_f = v_p - desc;

        printf ("Valor do produto: R$ %.2f \n", v_p);
        printf ("Forma de pagamento: à vista \n");
        printf ("Valor do desconto: R$ %.2f \n", desc);
        printf ("Total a pagar: R$ %.2f \n", v_f)
        break;

        case 2 :
        printf ("Escolha a quantidade de parcelas: ");
        scanf ("%i", &parc);
        
        valorparcela = v_p / parc
        v_f = v_p - desc;

        printf ("Valor do produto: R$ %.2f \n", v_p);
        printf ("Forma de pagamento: a prazo")
        printf ("Valor por parcelas: %.2f \n", valorParcela);
        printf ("Quantidade de parcelas: %i \n", parc);
        printf ("Total a prazo: R$ %.2f \n", v_f);
        break;

        default :
        printf ("opcao invalida!");
    }
    getchar () //pausa no windows e linux

    return 0;

}

    