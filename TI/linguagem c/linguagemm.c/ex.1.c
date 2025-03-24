#include<stdlib.h>
#include<locale.h>
#include <string.h>

int total_alunos;
char nome_auno[50];
float N1, N2, media;

int main(void){
	setlocale (LC_ALL, "Portuguese");

	printf("Quantos alunos serão cadastrados?");
	scanf("%d", &total_alunos);
	

	for (i = 1; i <= total_alunos; i++){

	printf("Qual a nota 1?");
	scanf("%f", &N1);

	printf("Qual a nota 2?");
	scanf("%f", &N2);
	
	system("cls");
}
}
	
	media = (N1 + N2)/2;
	
	//imprimir