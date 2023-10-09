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