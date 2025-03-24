// incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	
	int numerogrande = rand ();

    int numerosecreto =  numerogrande % 100;  
    int chute;
    int pontos = 1000;
    pontos = pontos *2;
    int numero_de_tentativas=1;
    int tentativas =1;


    
    while(1){

printf("Tentativa  %d\n", tentativas);
printf("Qual é o seu chute? ");
scanf("%d", &chute);
printf("Seu chute foi %d\n", chute);

if(chute<0){
    printf("Você não pode escolher numeros negativos");
    continue;
}
    int acertou = (chute== numerosecreto);
    int maior = (chute > numerosecreto);

 if(acertou){
    printf("Parabens! Você acertou\n");
    printf("Jogue de novo, você é um bom jogador\n");
    break;

} else if (maior){
        printf("Seu chute foi maior que o numero secreto\n");
    } else{
        printf("Seu chute foi menor que o numero secreto\n");
    }
    tentativas++;

    int pontosperdidos = (chute - numerosecreto)/2;
    pontos = pontos - pontosperdidos;
 }

        printf("Fim de jogo! Você esgotou todas as tentativas.\n");
        printf("Total de pontos: %d\n", pontos);
    }
 return 0;
}
