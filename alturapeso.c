#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 
{
  printf("Este programa verifica o peso e a altura para servir o exercito. \n\n ");
  float altura, peso;
 
  printf("Digite o valor de sua altura em metros: \n") ;
  scanf("%f",  &altura) ;

  printf("Digite o valor de seu peso em kg: \n ");
  scanf("%f", &peso);
  setlocale(LC_ALL, "Portuguese");
  if (altura >= 1.60 && peso >= 60.0) {
    printf ("O candidato pode fazer inscrição. \n") ;
    printf ("Parabens!\n");
  }
  
  else 
      printf(" O candidato não passou na seleção") ;
  return 0;
