#include <stdio.h>
#include <stdlib.h>

int main ()
 {
   struct fichaAluno;
    {
      char nomedoAluno [40];
      int numeroRA;
      float nota;
     }
     
    struct fichaAluno aluno;
    printf ("\n---------CadastroAluno--------- \n\n\n");
   
    printf("Digite o nome do aluno..................:");
     fgets (aluno.nomedoAluno, 40, stdin);
     
    printf("Digite o numero do RA do aluno..........:");
     scanf("%d", &aluno.numeroRA);
     
    printf("Digite a nota do aluno..................:");
     scanf("%f", &aluno.nota);
     
    printf("\n-------------lendo os dados da struct---------\n\n\n");
     
    printf("nome........................:%s",aluno.nomedoAluno);
    
    printf("numero......................:%d \n", aluno.numeroRA);
    
    printf("nota........................:% . 3f \n",aluno.nota);
    
    return 0;
    
    }
