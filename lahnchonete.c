
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
setlocale(LC_ALL, "Portuguese"); //IDIOMA DO SISTEMA
system ("title GRUPO LAMBDA"); //NOME DO GRUPO

int codigo_Pedido;

printf("CODIGO PARA REALIZAR PEDIDO DE LANCHE \n\n");

printf(" _____________________________________ \n");
printf("|                                     |\n");
printf("| ESPECIFICAÇÃO   | CODIGO | PREÇO    |\n");
printf("| ----------------|--------|----------|\n");
printf("| CACHORRO QUENTE | 100    | R$ 10.50 |\n");
printf("| HAMBURGUER      | 103    | R$ 12.00 |\n");
printf("| REFRIGERANTE    | 105    | R$ 05.00 |\n");
printf("|_____________________________________|\n");
printf("|                                     |\n");
printf("|    PROMOÇÃO REFRIGERANTE INCLUSO    |\n");
printf("|     PREÇO DO REFRI SERÁ INCLUSO     |\n");
printf("|_____________________________________|\n\n");

printf("DIGITE O CODIGO DO QUE DESEJA PEDIR: ");
scanf("%d", &codigo_Pedido);

printf("\n");

if (codigo_Pedido == 100) {
	
	printf("VALOR A SER PAGO PELO CACHORRO QUENTE + REFRIGERANTE É: R$ 15.50");
	
} else if (codigo_Pedido == 103) {
	
	printf("VALOR A SER PAGO PELO HAMBURGUER + REFRIGERANTE É: R$ 17.00");
	
} else if (codigo_Pedido == 105) {
	
	printf("PEDIDO SÓ REFRIGERANTE, VALOR A SER PAGO É: R$ 05.00");
	
} else {
	
	printf("VOCÊ NÃO DESEJA NADA DA LISTA");
	
}

return 0;
}
