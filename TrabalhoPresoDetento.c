#include <stdio.h>
#include <stdlib.h>

int main()
  {
     struct fichaPreso;
     {
        
        char nomedopreso[80];
        int CPFdopreso;
        int RGdopreso;
        float AlturaDoPreso;
        int idadeDoPreso;
        int PesoDoPreso;
        char nacionalidade[80];
        
    }

    struct fichaPreso preso;
    printf ("\n--------CadastroDetento---------\n\n\n");

    printf("Digite o nome do Preso..................:");
     fgets (preso.nomedopreso, 80, stdin);

    printf("Digite o CPF do Preso...................:");
     scanf("%d", &preso.CPFdopreso);

    printf("Digite o RG do Preso....................:");
     scanf("%d", &preso.RGdopreso);

    printf("Digite a Altura do Preso................:");
     scanf("%f", &preso.AlturaDoPreso);

    printf("Digite a Idade do Preso.................:");
     scanf("%d", &preso.idadeDoPreso);

    printf("Digite o peso do Preso..................:");
     scanf("%d", &preso.PesoDoPreso);

    printf("Digite a Nacionalidade...................");
     fgets (preso.nacionalidade, 80, stdin);


    printf("\n-----------lendo os dados da struct-----------\n\n\n");

    printf("nome........................:%s", preso.nomedopreso);

    printf("numero......................:%d \n", preso.CPFdopreso);
    
    printf("numero......................:%d \n", preso.RGdopreso);
    
    printf("numero......................:%d 3f \n", preso.AlturaDoPreso);
    
    printf("numero......................:%d \n", preso.idadeDoPreso);
    
    printf("numero......................:%d \n", preso.PesoDoPreso);

    printf("nome........................:%s", preso.nomedopreso);
    
    return 0;
    
}
