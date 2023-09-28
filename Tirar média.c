#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;

    printf ("Escreva o primeiro numero: \n");
    scanf ("%f", &n1);

    printf ("Escreva o segundo numero: \n ");
    scanf ("%f", &n2);
  
  float soma = n1 + n2;
  float media = soma / 2;

  if (media >= 7) {
    printf ("APROVADO \n");
  }
  else if (media < 7 && media >=5){
    printf ("REPROVADO \n");
  }

printf ("Sua media foi: %.1f \n", media);


}

return 0;