FEITO NO TRABALHO, OBSERVE QUE O FOR É CAPAZ DE CRIAR UMA VÁRIAVEL TAMBÉM, EU DECLAREI A VARIAVEL "i" COMO INTEIRO DENTRO DO FOR.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declaração das variáveis
    int n;
    
    //perguntando dados ao usuário
    printf ("----------------- TABUADA ----------------\n\n");
    printf ("Digite abaixo um número a ser multiplicado:\n");
    scanf ("%d", &n);
    
    printf ("Tabuada do %d: \n", n);
    
    //para i de 1 ate 10 passo 1 faca
    // caso seja para pular de 2 em 2 = (i += 2)
    for (int i = 1; i <= 10; i++) {
        printf ("%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}










---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
                              FEITO EM SALA DE AULA \/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    int numero;
    int i;
     
     printf ("Digite um número para taboada.\n\n");
     scanf ("%i", &numero);

    // 1 = é <- (recebe)
    // 2 = é =

    //para i de 1 ate 10 passo 1 faca
    for (i = 1; i <= 10; i++) {
        printf ("%i x %i = %i \n", numero , i, i*numero);
    }

//---para i de 1 ate 10 passo 2 faca---
//(ir de 2 em dois, basta adicionar i+=2 ao fim do for)
//for (i = 1; i <= 10; i+=2) {
//printf ("%i x %i = %i \n", numero , i, i*numero);
//}

getchar ();
return 0;

}





#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1;
    int n2;
    int n3;
    
    printf ("Digite o primeiro número inteiro.\n");
    scanf ("%d", &n1);
    
    printf ("Digite o segundo número inteiro. \n");
    scanf ("%d", &n2);
    
    printf ("Digite o terceiro número inteiro. \n");
    scanf ("%d", &n3);
    
    
    

 
    return 0;
}






Crie um programa em C que peça ao usuário para inserir três números inteiros e, em seguida, determine e imprima o maior número entre eles. Além disso, o programa deve lidar com casos em que dois ou mais números são iguais.

Aqui está um exemplo de como você pode implementar essa questão:

c
Copy code
#include <stdio.h>

int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3) {
        printf("O maior número é: %d\n", numero1);
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        printf("O maior número é: %d\n", numero2);
    } else {
        printf("O maior número é: %d\n", numero3);
    }

    return 0;
}

