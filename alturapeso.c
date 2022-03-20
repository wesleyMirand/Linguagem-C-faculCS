#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 
{
  printf("este programa verifica o peso e a altura para servir o exercito. \n\n ");
  float altura, peso;
 
  printf("digite o valor de sua altura em metros: \n") ;
  scanf("%f",  &altura) ;

  printf("digite o valor de seu peso em kg: \n ");
  scanf("%f", &peso);
  setlocale(LC_ALL, "portuguese");
  if (altura >= 1.60 && peso >= 60.0) {
    printf ("o candidato pode fazer inscrição. \n") ;
    printf ("parabens!\n");
  }
  
  else 
      printf(" o candidato não passou na seleção") ;
  return 0;
