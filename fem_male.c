#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    char sexo;
    float altura;
    float r;

    printf ("-------------------------------------\n");
    printf ("Calculadora para o seu peso ideal!\n");
    printf ("Digite o seu sexo: \n");
    printf ("M para sexo Masculino\n");
    printf ("F para sexo Feminino\n");
    printf ("-------------------------------------\n");
    scanf ("%c", &sexo);

   printf ("------------------\n");
   printf ("Digite sua altura:\n");
   printf ("-------------------\n");
   scanf ("%f", &altura);

 //transforma em maisculo
   //sexo = toupper(sexo); *aprender a utilizar) 

   switch (sexo)
{
    case 'm':
    r = (72.7 * altura) - 58;
    break;

    case 'f': 
    r = (62.1 * altura) - 44.7;
    break;
}

 printf ("O seu peso ideal é: %.2f", r);
    return 0;
}
