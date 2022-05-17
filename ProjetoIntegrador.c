#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	system ("title PROJETO INTEGRADOR 3º SEMESTRE"); //NOME DO GRUPO
	
	//VARIAVEL INTEIRO
	int codigo_Pedido=0, unidades=0, opcao=0;
	int codigo_Lanche=0, unidade_Cquente=0, unidade_Mquente=0, unidade_Xsalada=0; //lanche
	int codigo_Doce=0, unidade_Briga=0, unidade_Mmallow=0, unidade_Cocada=0; //doce
	int codigo_Bebida=0, unidade_Refri=0, unidade_Suco=0, unidade_Cgelado=0; //bebida 
	
	//VARIAVEL DOUBLE
	double total_Pagar=0;
	double total_Cquente=0, total_Mquente=0, total_Xsalada=0; //lanche
	double total_Briga=0, total_Mmallow=0, total_Cocada=0; //doce
	double total_Refri=0, total_Suco=0, total_Cgelado=0; //bebida
	
	printf("SEJA BEM-VINDO A 'P.I. LANCHONTE 3o SEMESTRE' \n\n");
	
	do {
		//MENU
		printf("ESCOLHA A OPCAO DESEJADA: \n");
		printf("1 - LANCHES \n");
		printf("2 - DOCES \n");
		printf("3 - BEBIDAS \n");
		printf("\n");
		
		//COLETA DO CODIGO DA OPÇÃO
		printf("CODIGO DA OPCAO: ");
		scanf("%d", &codigo_Pedido);
		printf("\n");
		
		
		while (codigo_Pedido >= 4){ //IMPEDE QUE A OPÇÃO SEJA (4) OU MAIOR QUE (4)
			printf("OPÇÃO DESEJADA NÃO EXISTE, TENTE NOVAMENTE. \n");
			printf("ESCOLHA A OPÇÃO DESEJADA: \n");
			printf("1 - LANCHES \n");
			printf("2 - DOCES \n");
			printf("3 - BEBIDAS \n");
			printf("\n");
			
			printf("OPÇÃO: ");
			scanf("%d", &codigo_Pedido);
		}
		
		//PROCESSAMENTO
		switch (codigo_Pedido){
			case 1:
				printf("OPCAO (1) LANCHES \n");
				printf("ESCOLHA O CODIGO DO LANCHE \n");
				printf(" _____________________________________ \n");
				printf("|                                     |\n");
				printf("| ESPECIFICACAO   | CODIGO | PREÇO    |\n");
				printf("| ----------------|--------|----------|\n");
				printf("| CACHORRO QUENTE | 101    | R$ 08.00 |\n");
				printf("| MISTO QUENTE    | 102    | R$ 05.00 |\n");
				printf("| X-SALADA        | 103    | R$ 12.00 |\n");
				printf("|_____________________________________|\n");
				printf("                                       \n");
				
				cout << "DIGITE O CODIGO DO QUE DESEJA PEDIR: ";
				cin >> codigo_Lanche;
				cout << "QUANTAS UNIDADES: ";
				cin >> unidades;
				cout << "\n";
				
					switch (codigo_Lanche){
						case 101:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE CACHORRO QUENTE \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Cquente = unidade_Cquente + unidades;
							total_Pagar = total_Pagar + (unidades * 08.00);
							total_Cquente = total_Cquente + (unidades * 08.00);
							break;
							
						case 102:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE MISTO QUENTE \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Mquente = unidade_Mquente + unidades;
							total_Pagar = total_Pagar + (unidades * 05.00);
							total_Mquente = total_Mquente + (unidades * 05.00);
							break;
							
						case 103:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE X-SALADA \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Xsalada = unidade_Xsalada + unidades;
							total_Pagar = total_Pagar + (unidades * 12.00);
							total_Xsalada = total_Xsalada + (unidades * 12.00);
							break;
					}
				
				break;
				
			case 2:
				printf("OPCAO (2) DOCES \n");
				printf("ESCOLHA O CODIGO DO DOCE \n");
				printf(" _____________________________________ \n");
				printf("|                                     |\n");
				printf("| ESPECIFICACAO   | CODIGO | PREÇO    |\n");
				printf("| ----------------|--------|----------|\n");
				printf("| BRIGADEIRO      | 201    | R$ 05.00 |\n");
				printf("| MARSHMALLOW     | 202    | R$ 01.00 |\n");
				printf("| COCADA          | 203    | R$ 03.00 |\n");
				printf("|_____________________________________|\n");
				printf("                                       \n");
				
				cout << "DIGITE O CODIGO DO QUE DESEJA PEDIR: ";
				cin >> codigo_Doce;
				cout << "QUANTAS UNIDADES: ";
				cin >> unidades;
				cout << "\n";
				
					switch (codigo_Doce){
						case 201:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE BRIGADEIRO \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Briga = unidade_Briga + unidades;
							total_Pagar = total_Pagar + (unidades * 05.00);
							total_Briga = total_Briga + (unidades * 05.00);
							break;
							
						case 202:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE MARSHMALLOW \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Mmallow = unidade_Mmallow + unidades;
							total_Pagar = total_Pagar + (unidades * 01.00);
							total_Mmallow = total_Mmallow + (unidades * 01.00);
							break;
							
						case 203:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE COCADA \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Cocada = unidade_Cocada + unidades;
							total_Pagar = total_Pagar + (unidades * 03.00);
							total_Cocada = total_Cocada + (unidades * 03.00);
							break;
					}
				
				break;
				
			case 3:
				printf("OPCAO (3) BEBIDAS \n");
				printf("ESCOLHA O CODIGO DA BEBIDA \n");
				printf(" _____________________________________ \n");
				printf("|                                     |\n");
				printf("| ESPECIFICACAO   | CODIGO | PREÇO    |\n");
				printf("| ----------------|--------|----------|\n");
				printf("| REFRIGERANTE    | 301    | R$ 05.00 |\n");
				printf("| SUCO            | 302    | R$ 03.00 |\n");
				printf("| CHA GELADO      | 303    | R$ 07.00 |\n");
				printf("|_____________________________________|\n");
				printf("                                       \n");
				
				cout << "DIGITE O CODIGO DO QUE DESEJA PEDIR: ";
				cin >> codigo_Bebida;
				cout << "QUANTAS UNIDADES: ";
				cin >> unidades;
				cout << "\n";
				
					switch (codigo_Bebida){
						case 301:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE REFRIGERANTE \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Refri = unidade_Refri + unidades;
							total_Pagar = total_Pagar + (unidades * 05.00);
							total_Refri = total_Refri + (unidades * 05.00);
							break;
							
						case 302:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE SUCO \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Suco = unidade_Suco + unidades;
							total_Pagar = total_Pagar + (unidades * 03.00);
							total_Suco = total_Suco + (unidades * 03.00);
							break;
							
						case 303:
							cout << "******************************************************* \n";
							cout << "         COMPRANDO "<< unidades <<" UNIDADES DE CHA GELADO \n";
							cout << "******************************************************* \n";
							cout << "\n";
							
							unidade_Cgelado = unidade_Cgelado + unidades;
							total_Pagar = total_Pagar + (unidades * 07.00);
							total_Cgelado = total_Cgelado + (unidades * 07.00);							
							break;
					}
				
				break;
				
		}
		
		//coleta
		printf("\n");
		printf("DIGITE (1) PARA ADICIONAR MAIS PRODUTUTOS OU DIGITE (0) PARA SAIR \n");
		printf("OPCAO: ");
		scanf("%d", &opcao);
		printf("\n");
	
		while((opcao != 0) && (opcao !=1)){
			printf("ERRO SELECIONE (1) PARA ADICIONAR MAIS PRODUTUTOS OU DIGITE (0) PARA SAIR \n");
			printf("OPCAO: ");
			scanf("%d", &opcao);
			printf("\n");
		}
		
	}while (opcao != 0); // SAI DO MENU QUANDO A OPÇÃO FOR (0)
	
	//MENU TOTAL
	cout <<"\n\n";
	cout << "        COMPROVANTE DE COMPRA        \n";
	cout << "ESPECIFICACAO   | UNIDADES | TOTAL   \n";
	cout << "----------------|--------  |---------\n";
	cout << "CACHORRO QUENTE |   ["<<unidade_Cquente<<"]    | R$ "<<total_Cquente<< endl;
	cout << "MISTO QUENTE    |   ["<<unidade_Mquente<<"]	   | R$ "<<total_Mquente<< endl;
	cout << "X-SALADA        |   ["<<unidade_Xsalada<<"]    | R$ "<<total_Xsalada<< endl;
	cout << "BRIGADEIRO      |   ["<<unidade_Briga<<"]	   | R$ "<<total_Briga<< endl;
	cout << "MARSHMALLOW     |   ["<<unidade_Mmallow<<"]    | R$ "<<total_Mmallow<< endl;
	cout << "COCADA          |   ["<<unidade_Cocada<<"]	   | R$ "<<total_Cocada<< endl;
	cout << "REFRIGERANTE    |   ["<<unidade_Refri<<"]	   | R$ "<<total_Refri<< endl;
	cout << "SUCO            |   ["<<unidade_Suco<<"]	   | R$ "<<total_Suco<< endl;
	cout << "CHA GELADO      |   ["<<unidade_Cgelado<<"]	   | R$ "<<total_Cgelado<< endl;
	cout << "-------------------------------------\n";
	cout << "TOTAL A PAGAR                R$"<< total_Pagar << endl;
	cout << "\n";
	cout << "INSTITUICAO: P.I. WORKSHOP ADS LTA   CNPJ: 00.000.000/0000-00";
	
	
		
	
	
	return 0;
}
