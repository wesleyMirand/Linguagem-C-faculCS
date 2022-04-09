/* ----------------------------
	PARTICIPANTES:
	WESLEY DOS SANTOS MIRANDA
	LUIZ HENRIQUE VENTURA
	JOÃO PEDRO SANTOS DA CRUZ
	VINICIUS GONÇALVES DE SOUZA
	ESTEVÃO MARCIAL VAN DUNEM
------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
setlocale(LC_ALL, "Portuguese");  /* IDIOMA DO SISTEMA */
system ("title GRUPO LAMBDA");  /* NOME DO GRUPO */

//DECLARANDO VARIAVEIS
int codigo_Pedido, cont;
float preco_CachorroQuente, preco_Hamburguer, preco_Refri, preco_Total;

//DECLARANDO VALOR DAS VARIAVEIS PREÇO
preco_CachorroQuente = 10,50;
preco_Hamburguer = 12,00;
preco_Refri = 5,00;

//INICIO DO CODIGO
printf("CODIGO PARA REALIZAR PEDIDO DE LANCHE \n\n");

printf("_____________________________________\n");
printf("|                                     |\n");
printf("| ESPECIFICAÇÃO   | CODIGO | PREÇO    |\n");
printf("| ----------------|--------|----------|\n");
printf("| CACHORRO QUENTE | 100    | R$ 10.50 |\n");
printf("| HAMBURGUER      | 103    | R$ 12.00 |\n");
printf("| REFRIGERANTE    | 105    | R$ 05.00 |\n");
printf("|_____________________________________|\n");


printf("DIGITE O CODIGO DO QUE DESEJA PEDIR: ");
scanf("%d", &codigo_Pedido);

printf("\n");

if (codigo_Pedido == 100) { /* PEDIDO DE CACHORRO QUENTE */
	printf("VALOR A SER PAGO PELO CACHORRO QUENTE É: %.2f \n\n", preco_CachorroQuente);
	printf("DESEJA ADICIONAR O REFRIGERANTE? DIGITE (1) PARA SIM E (2) PARA NÃO: ");
	scanf("%d", &cont);
	
	printf("\n");
	
		if (cont == 1) {
			preco_Total = preco_CachorroQuente + preco_Refri;
			printf("PREÇO TOTAL É R$ %.2f", preco_Total);
		} else {
			printf("PREÇO TOTAL É R$ %.2f", preco_CachorroQuente);
		}
	
} else if (codigo_Pedido == 103) { /* PEDIDO DE HAMBURGUER */
	printf("VALOR A SER PAGO PELO HAMBUERGUER É: %.2f \n\n", preco_Hamburguer);
	printf("DESEJA ADICIONAR O REFRIGERANTE? DIGITE (1) PARA SIM E (2) PARA NÃO: ");
	scanf("%f", &cont);
		
	printf("\n");
	
		if (cont == 1) {
			preco_Total = preco_Hamburguer + preco_Refri;
			printf("PREÇO TOTAL É R$ %.2f", preco_Total);
		} else {
			printf("PREÇO TOTAL É R$ %.2f", preco_Hamburguer);
		}
} else if (codigo_Pedido == 105) { /* PEDIDO DE REFIGERANTE */
	printf("VALOR A SER PAGO PELO REFRIGERANTE É: %.2f", preco_Refri);
	
} else {
	printf("VOCÊ NÃO DESEJA NADA DA LISTA");
	
}

return 0;
}
