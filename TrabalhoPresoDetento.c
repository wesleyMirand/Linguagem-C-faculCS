#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
    struct fichaPreso {
    	
        char nomedopreso [80], nacionalidade [80];
        int CPFdopreso, RGdopreso, idadeDoPreso;
        float AlturaDoPreso, PesoDoPreso, imcDoPreso;
          
    };

    struct fichaPreso preso;
    
    printf ("\n--------CadastroDetento---------\n\n\n");

    printf("Digite o nome do Preso..................: ");
    	fgets(preso.nomedopreso, 80, stdin);
    	
    printf("Digite a nacionalidade..................: ");
    	fgets(preso.nacionalidade, 80, stdin);

    printf("Digite o CPF do Preso...................: ");
    	scanf("%d", &preso.CPFdopreso);

    printf("Digite o RG do Preso....................: ");
    	scanf("%d", &preso.RGdopreso);
    	
     printf("Digite a idade do Preso.................: ");
    	scanf("%d", &preso.idadeDoPreso);

    printf("Digite a altura do Preso................: ");
    	scanf("%f", &preso.AlturaDoPreso);

    printf("Digite o peso do Preso..................: ");
    	scanf("%f", &preso.PesoDoPreso);

	
	preso.imcDoPreso = preso.PesoDoPreso/(preso.AlturaDoPreso*preso.AlturaDoPreso);
	
	
    printf("\n-----------Lendo os dados do detento-----------\n\n\n");

    printf("Nome do detento.................................: %s", preso.nomedopreso);
    
    printf("Nacionalidade do detento........................: %s", preso.nacionalidade);

    printf("Número do CPF...................................: %d \n", preso.CPFdopreso);
    
    printf("Número do RG....................................: %d \n", preso.RGdopreso);
    
    printf("Idade do detento................................: %d \n", preso.idadeDoPreso);
    
    printf("Altura do detento...............................: %.2f \n", preso.AlturaDoPreso);
           
    printf("Peso do detento.................................: %.2f \n", preso.PesoDoPreso);
    
    printf("IMC do detento..................................: %.2f \n", preso.imcDoPreso);
    
    if (preso.imcDoPreso <= 18.5){
		
 		printf("Detento muito magro \n");
 		
 	}else if (preso.imcDoPreso > 18.5 && preso.imcDoPreso < 24.9){
 		
		printf("Detento com peso normal \n");
		
	}else if (preso.imcDoPreso >= 25 && preso.imcDoPreso <29.9){
		
		printf("Detento com sobrepeso \n");
		
	}else if (preso.imcDoPreso >=30 && preso.imcDoPreso < 39.9 ){
		
		printf("Detento obeso \n");
		
	}else {
		
		printf("Detento com obesidade grave \n");
		
	}
    
    
	
	
    
    return 0;
    
}
