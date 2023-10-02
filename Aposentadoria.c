#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale (LC_ALL, "portuguese");
        int nasc;
        int temposervico;
        int matricula;
        int idade;
        char resultado [250];

        printf ("Digite sua matrícula na empresa: \n");
        scanf ("%i", &matricula);

        printf ("Digite seu ano de nasc.: \n");
        scanf ("%i", &nasc);
     
        printf ("Digite seu tempo de trabalho.: \n");
        scanf ("%i", &temposervico);
        
        
        idade = 2023 - nasc;
        
        system ("clls || clear")


     if (idade >= 65 || temposervico >= 30) {
        strcpy (resultado, "Requerer aposentadoria!");
     } else {
        strcpy (resultado, "Não requerer aposentadoria!");
     }
    

    printf ("Seu código: %d \n", matricula);
    printf ("Sua idade: %d \n", idade);
    printf ("Seu tempo de serviço: %d \n", temposervico);
    printf ("Resultado da consulta: %s \n", resultado);


     return 0;
    }
