#include <stdio.h>
#include <stdlib.h>
// chcp 65001
int main()
{
    //VARIÁVEIS


    int minha_idade;
    int mae_idade;
    int irmao_idade;
    int pai_idade;

    //CADASTRO

    printf ("Qual a sua idade?\n");
    scanf ("%i", &minha_idade);

    printf ("Qual a idade da sua mãe?\n");
    scanf ("%i", &mae_idade);

    printf ("Qual a idade do seu irmão?\n");
    scanf ("%i", &irmao_idade);

 
    printf ("Qual a idade do seu pai?\n");
    scanf ("%i", &pai_idade);

    //IMPRESSÃO

    printf ("Bem, sua idade é %i, a da sua mãe é %i, a do seu irmão é %i e a do seu pai %i\n", minha_idade, mae_idade, irmao_idade, pai_idade);
    printf ("Sua idade = %i\nIdade mãe = %i\nIdade irmão = %i\nIdade pai = %i");
 
     
   
    scanf ("%d", &minha_idade);

 


    return 0;
}