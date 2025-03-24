	
	Começa com:  
	#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	int main (){
	
	{}> Tudo que estiver dentro das chaves será executado
	F10> executa o programa
	system("pause");> serve para executar o programa no windows
	
	OBS: eu tenho sempre que compilar para depois executar (F9) + (F10)
	OBS: o ponto e vírgula deve estar sempre presente (;)
	OBS: o \n serve para pular uma linha
	ex: printf("Mensagem1.\n");
	
	
	!---------------- entrada e saída de dados:
		\a > toca um bipe, alarme sonoro
		\b > backspace
		\n > quebra de linha
		\t > TAB
		\r > retorna ao inicio da linha
		\\ > para imprimir
		%i > para numeros inteiros
		%f > para numeros com vírgula
		%.2f> valor real com apenas duas casas
		%c > para imprimir apenas um caractere ex ´a´
		%s > substitui uma palavra
		char: é utilizado para representar caracteres individuais, como letras, dígitos e símbolos
		
		Exemplo:
				printf("Oi, tudo bem? Meu nome é Eduaeda.\n");
	
	printf("Valor inteiro: %i.\n",10);
	printf("Valor real:%f.\n", 3.1415656);
	printf("Valor real com apenas duas casas: %.2f\n", 3.1415656);
	printf("Dado de texto: %c.\n",'a');
	printf("Dado de texto: %s.\n", "testando");
	
	
	!------------pedir o usuario para inserir dados:
		scanf
		Exemplo: 
	printf("Valor inicial da idade: %i.\n", idade);
	
	printf("Digite uma idad:\n");
	scanf("%i", &idade);
	
	printf("Idade informada: %d.\n", idade);
	

int main(){
	
	int idade = 0;
	int ano = 1950;
	
	printf("Valor inicial da idade e o ano:\n");
	
	printf("Digite uma idade e o ano:\n");
	scanf("%i %i", &idade, &ano);
	
	printf("Idade informada: %i.\n", idade);
	printf("Idade informada: %i.\n", ano);	
		
	
	
}
##------------- EXEMPLO: SOMANDO IDADES-----
#include <stdio.h>

int main()
{
    int minhaIdade = 15;
    int maeIdade = 40;
    int paiIdade = 50;

  int idadeTotal;
  
  idadeTotal = minhaIdade + maeIdade + paiIdade;

    printf ("%i\n", idadeTotal);

return 0;


}

obs: e se eu quisesse dividir? > R: é só colocar "/"
Ex: idadeTotal = minhaIdade + maeIdade / paiIdade;


##------------- EXEMPLO: calculando área-----
#include <stdio.h>

int main()
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base:");
    scanf ("%i", &base);

    printf("Digite o valor da altura:");
    scanf("%i", &altura);

    area = base * altura;
    
    printf("O valor da area do retangulo e = %i", area);



return 0;


}


------------NOVAS FUNÇÕES:
int: inteiro
float > serve para números decimais
char > permite acrescentar uma letra na variavel
double: guarda um numero real maior que float
void: tipo vazio (vai mostrar que o programa é só o que está dentro do MAIN)


ex: #include <stdio.h>

int main()
{
    int inteira = 10;
    float decimal = 10.5;
    char letra = 'a';

    printf ("%i\n", inteira);
    printf("%f\n", decimal);
    printf("%c\n", letra);



    


return 0;


}

#----exemplos
int main()
{
   int num1 = 5;
   float num2 = 2;
   float resultado = num1 / num2;

printf("%f\n", resultado);


    


return 0;


}


obs: se quero dizer que por exxemplo 4 é diferente de 5> (!=)
obs: se quero falar que 4 é = a 5 > (==)
obs: eu so coloco 1 = quando eu for colocar alguma variavel


#------------PARA FAZER FATORIAL
#include <stdio.h>

int main()
{
 int fatorial = 5;
 int resposta =1;

 for ( ; fatorial >=1; --fatorial){
   printf("contador = %i", fatorial);
 }

return 0;


}


-------#CADASTRAR APENAS UMA LETRA
EX:
char nome;
int idade;

main(){
	
	printf("digite a primeira letra do seu nome:.\n");
	scanf("%c", &nome);
	
	printf("Cadastrado(a): %c", nome);
	scanf("%i", &idade);
	
}

-------##CADASTRAR O NOME
EX:
char nome[20];
int idade;

main(){
	
	printf("digite a primeira letra do seu nome:.\n");
	scanf("%c", &nome);
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	
	printf("Cadastrado(a): %s, Seja bem vindo(a)", nome);
	
}
	
	-------------ex:
char nome[100];

main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("Caio\nPedro\nEduarda\nLucas\nJose");
	printf("Davi\n\nKarla\nAlda");
	system("pause");

}
	
----------ex:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int idade;

main(void){

	setlocale(LC_ALL,"Portuguese");
	//CADASTRO
	printf("Informe sua idade\n");
	scanf("%i",&idade);
	//IMPRESSÃO
	printf("idade =%i\n", idade);
	system("pause");

}

___________________ex: fazendo media das notas:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float n1, n2, n3, n4, media;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite sua nota 1\n");
	scanf("%f", &n1);

	printf("Digite sua nota 2\n");
	scanf("%f", &n2);

	printf("Digite sua nota 3\n");
	scanf("%f", &n3);
	
	printf("Digite sua nota 4\n");
	scanf("%f", &n4);


	media = (n1+n2+n3+n4)/4;
	



//IMPRESSÃO
	printf("1ª nota = %.2f ptos\n", n1);
	printf("2ª nota = %.2f ptos\n", n2);
	printf("3ª nota = %.2f ptos\n", n3);
	printf("3ª nota = %.2f ptos\n", n4);
	printf("media = %.2f \n", media);
	
	system("pause");
	return 0;

}


________sinal de difrente:
!=0
ex:
int main (){
		int i = 0;
		while (i !=0){
			printf("Tese");


______DIFERENÇA ENTRE O DO E O WHILE:
while (condicao) {
    // Código a ser executado enquanto a condição for verdadeira
}


do {
    // Código a ser executado pelo menos uma vez e repetidamente enquanto a condição for verdadeira
} while (condicao);

while: Pode nunca executar o bloco de código se a condição inicial for falsa.
do...while: Garante que o bloco de código será executado pelo menos uma vez, independentemente da condição.




______APRENDENDO "IF ELSE":
EX:
int main(){
int idade;
printf("favor me informar idade:/n");
scanf("%i", &idade);

if(idade < 18){
	printf("Bebidas alcoólicas não estão liberada./n");
} else {
	printf("bebidas liberadad./n");
}

return 0;
}


________APENDENDO "ELSE IF":
ex1:
int main()
{
int idade;
printf("informe idade/n");
scanf("%i", &idade);

if (idade <= 5)
printf("bebê/n");
else if (idade >5 &&idade <=10);
printf("criança/n");
return 0;
}

ex 2:
int main()
{
int idade;
printf("informe idade/n");
scanf("%i", &idade);

if (idade <= 5)
printf("bebê\n");
else if (idade >5 && idade <=10)
printf("criança\n");
else if (idade >10 && idade <=18)
printf("adolescente\n");
else
printf("idoso\n");

return 0;
}
Obs >o (&&) ta conectando duas condições



----------APRENDENDO "DEFAULT":
EX:
int main()
{
int i;
printf("Insira um numero inteiro de 1 a 5\n");
scanf("%i", &i);

switch (i) {
	case 1:
	printf("primeiro\n");
	break;
	case 2:
	printf("segundo\n");
	break;
	case 3:
	printf("terceiro\n");
	break;
	case 4:
	printf("quarto\n");
	break;
	default:
	printf("opção não válida");
	break;
}

OBS: default: caso a opão não seja nenhuma desses casos acima, a ação padrão que deve ser feita deve ser prinff("opção não válida")



--------------------EXERCÍCIO 1:
int main()
{
int num1, num2;

printf("Digite 2 numeros inteiros:\n");
scanf("%i %i", &num1, &num2);

if(num2 ==0)
printf("divisão por 0 não permitida.\n");
else {
	if(num1 % num2 ==0)
		printf("%i e divisivel por %i.\n", num1, num2);
		else
		printf("%i não e divisivel por %i.\n", num1, num2);
}
return 0;
}


-------------COMO INVERTER UM NÚMERO? EXERCÍCIO 2:
int main()
{
int numero, cifra;
printf("digite um numero inteiro:\n");
scanf("%i", &numero);

if (numero >=0){
	do{
cifra = numero % 10;
printf("%i", cifra);
numero /=10;
	}while (numero !=0);
	printf("\n");
}

else if (numero <1){
numero = numero * -1;
printf("-");

do{
cifra = numero % 10;
printf("%i", cifra);
numero /=10;
	}while (numero !=0);
	printf("-");
}
return 0;
}



-----------Como utilizar Operador Condicional:
ex:
int main()
{
int num1;
int num2;
int resposta;
printf("Digite dois numeros:\n");
scanf("%i %i", &num1, &num2);
num1 < num2 ? printf("sim\n") : printf("nao\n");
resposta =(num1 < num2) ? 10: -10;
if (resposta) {
	printf("%i\n", resposta);
}
return 0;
}

Obs: Operador Ternário (´? :):
O operador ternário é uma forma compacta de escrever uma condição if-else que retorna um valor. A estrutura geral é:
condição ? valor_se_verdadeiro : valor_se_falso;
por exemplo:
int num1 = 3;
int num2 = 5;
resposta = (num1 < num2) ? 10 : -10;
// Aqui, num1 < num2 é verdadeiro (3 < 5), então resposta será 10.




--------------------FUNÇÃO DO break;
BREAK> serve para finalizar o código caso a variável sê certo, por exemplo:

int main() {
    int numerosecreto = 42;


    int chute;
    int i =0;
    
    for (int i =1; i <= numero_de_tentativas; i++){

printf("Tentativa %d de %d\n", i, numero_de_tentativas);
printf("Qual é o seu chute? ");

scanf("%d", &chute);
printf("Seu chute foi %d\n", chute);

int acertou = (chute == numerosecreto);

if(acertou){
    printf("Parabens! Você acertou\n");
    printf("Jogue de novo, você é um bom jogador\n");
break;
}
else{

    int maior = chute > numerosecreto;
    if(maior){
        printf("Seu chute foi maior que o numero secreto\n");
    } else{
        ("Seu chute foi menor que o numero secreto\n");
    }
}
}
printf("Fim de jogo\n");
}



-----------------------------------------FUNÇÃO "GETS" E "FGETS":
GETS> substitui o scanf para nomes que pode ter espaços
ex:
 printf("Digite o seu nome completo: \n");
 gets(nome_completo);

-----------------------------------------FUNÇÃO "fflush"
fflush(stdin); > vou colocar quando o sistema comaçar a dar bug
ex:
 printf("Digite o seu nome completo: \n");
 fflush(stdin);
 gets(nome_completo);

FGETS> (nome_completo, 50, stdin) : aqui o nome pode ter mil letras, se eu boto so 50 no parenteses, entao vai imprimir so 50;


-----------resumo codigo aula de hoje: 
char turno, nome_curso [30], horario[5], nome_candidato[50];
int matricula;
float nota1, nota2, media;


 int main (void){
 setlocale(LC_ALL, "Portuguese");

 printf("Digite o turno do curso M, V, N\n");
 scanf("%c", &turno);

 printf("Digite o nome do curso \n");
 scanf("%s", &nome_curso);

 printf("Digite o horario do curso \n");
 scanf("%f", &horario);

 printf("Digite o numero da matricula \n");
 fflush(stdin);
 scanf("%s", &matricula);

 printf("Digite o nome do candidato \n");
 fflush(stdin);
 gets(nome_candidato);

 printf("Digite a nota 1 \n");
 scanf("%f", &nota1);

 printf("Digite a nota 2 \n");
 scanf("%f", &nota2);

 media = (nota1 + nota2)/2;


 system("cls");
 //impressão
 printf("Nome do estudante: %c\n",turno);
 printf("Digite o nome do curso(a): %s\n", nome_curso);
 printf("Digite o horÃ¡rio do curso: %s\n", horario);
 printf("Digite o nÃºmero da matricula: %i\n", matricula);
 printf("Digite o nome do candidato(a): %s\n", nome_candidato);
 printf("A media das notas 1 e 2 são de: %2.f\n", media);

//impressão

 }




//////////////CADASTRAR PRODUTOS E SOMAR MAIS DE 1 VEZ:
EX:
#include <stdio.h>


int cont=1;
float preco, soma;

int main (void){
    while (cont <=3){
    printf("Preencha o preco do produto");
    scanf("%f", &preco);
    printf("cadastrado R$: %.2f\n", preco);
    soma = soma + preco;
    cont++;
  }
  printf("TOTAL = %.2f\n", soma);
}


////////////E SE O USUÁRIO QUISER ESCOLHER O NÚMERO DE TENTATIVAS???
EX:
#include <stdio.h>

int quantidade, cont=1;
float preco, soma;

int main (void){
	printf("Quantos produtos deseja cadastrar? ");
	scanf("%i", &quantidade);
	
    while (cont <=quantidade){
    printf("Preencha o preco do produto\n ");
    scanf("%f", &preco);
    printf("cadastrado R$: %.2f\n", preco);
    soma = soma + preco;
    cont++;
  }
  printf("TOTAL = %.2f\n", soma);
}



////////////E SE O USUÁRIO QUISER IR CADASTRANDO QUANTAS OPÇÕES QUISER SEM COLOCAR UMA QUANTIDADE ESPECÍFICA
EX:
#include <stdio.h>
#include <stdlib.h>

char opcao='s';

main (void){

    while(opcao == 's'){
	printf("Funcionou.......");
	printf("Cadastrar novamente? (s) ou (n):  ");
	fflush(stdin);
	scanf("%c", &opcao);
	}
}


/////////////////////////////LISTAR 3 IDADES 
Ex:
#include<stdio.h>

int idade[4], cont;
main(void){
		for(cont=1; cont <=3; cont++){
		printf("Insira uma idade: ");
		scanf("%i", &idade[cont]);
			
	}
	system("cls");
	//IMPRESSÃO
		for(cont=1; cont<=3; cont++){
		printf("Idade: %i anos.\n", idade [cont]);
		}
	
}

obs: no caractere o cont pode ser representado por (i)


///////////////////////PARA CADASTRAR 2 CLIENTES E 6 PRECOS DIFERENTES//////////

#include<stdio.h>

float preco1[3], preco2[3],preco3[3],soma[2];
int i;

main(void){
		for(i=1; i<=2;i++){
		printf("Cliente n%i", i);
		printf("Digite o Valor do %iº produto",i);
		scanf("%f", &preco1[i]);
		printf("Digite o Valor do %iº produto",i);
		scanf("%f", &preco2[i]);
		printf("Digite o Valor do %iº produto",i);
		scanf("%f", &preco3[i]);		
		soma[i] =  preco1[i] + preco2[i] + preco3[i];
	}
	
	//IMPRIMIR
		system("cls");
		for(i=1; i<=2;i++){
		printf("Cliente n%i", i);
		printf("Preco = %.2f", preco1[i]);
		printf("Preco = %.2f", preco2[i]);
		printf("Preco = %.2f", preco3[i]);
  }
 		 printf("TOTAL \", soma[i]);
		}
	


	//////////////	NOVO COMENADO -SLEEP///////////
	EX: sleep(1) > vou ter um delay de 1 segundo
	Obs: #include <unistd.h>  // Necessário para a função sleep
//



///////////COMPARAR PALAVRAS////////////////
#include <stdio.h>
#include <string.h>

char login[25];
char senha[25];
main(void){

while (1){
	printf("Digite o login:  ");
	scanf("%s", login);
	printf("Digite a senha:  ");
	scanf("%s", senha);
	
	if(strcmp(login, "Adm")==0 && strcmp(senha, "123")==0){
		printf("Login bem sucedido\n");
		break; //sair do loop
	}else{
		printf("Login ou senha incorretos. Tente novamente.\n");
	}
		
	}
	return 0;
}

OBS: strcmp > serve como um "verificador" se as opcoes de logine  senha estao corretos




///////////////////////MEDIA DAS NOTAS  + SWITCH //////////
#include <stdio.h>
#include <locale.h>


char nome_completo[3] [50], endereco[3][50], resp_financeiro[3][50];
char turma[3][100], chocolate[3][100], morango[3][100], manga[3][100];
float N1[3], N2[3], media[3];
int i, escolha[3];


main (void){
	setlocale(LC_ALL, "");
	
	for(i=1; i<=3; i++){
	printf("Qual o nome completo do aluno (a)?\n ");
	fflush(stdin);
	gets(nome_completo[i]);
	
	printf("Qual o enderço do aluno (a)?\n");
	fflush(stdin);
	gets(endereco[i]);
	
	printf("Qual o nome do responsável financeiro?\n  ");
	fflush(stdin);
	gets(resp_financeiro[i]);
	
	printf("Qual turma o aluno (a) está?\n  ");
	fflush(stdin);
	gets(turma[i]);
	
	printf("Qual a nota 1 do aluno (a)?\n ");
	fflush(stdin);
	scanf("%f", &N1[i]);
	
	printf("Qual a nota 2 do aluno (a)?\n ");
	fflush(stdin);
	scanf("%f", &N2[i]);
	
	media[i]= (N1[i] + N2[i])/2;
	
	system("cls");
}
	
	//IMPRIMIR
	for(i=1; i<=3; i++){
	printf("Nome do aluno(a): %s\n", nome_completo[i]);
	printf("Endereço do aluno(a): %s\n\n",  endereco[i]);
	printf("Nome do responsável financeiro(a): %s\n", resp_financeiro[i]);
	printf("Turma: %s\n", turma[i]);
	printf("1ª nota: %.2f\n", N1[i]);
	printf("2ª nota: %.2f\n", N2[i]);
	
	printf("Média = %.2f\n  ", media[i]);
	
	if (media[i]>=6){
	printf("Parabens! Você foi aprovado (a). Escolha o sabor de sorvete\n");
	printf("Chocolate / Morango / Manga\n");
	scanf("%s", &escolha);
	
	switch(escolha[i]){
	case 1: 
	printf("Voce escolheu chocolate\n");
	break;
	
	case 2: 
	printf("Voce escolheu morango\n");
	break;
	
	case 3: 
	printf("Voce escolheu manga\n");
	break;
	
	default:
	printf("VALOR INVALIDO\n");
	
	}else{
	printf("Você foi reprovado (a)");	
}
	
	
	}
	return 0;
}

	
	
/////////////////////   FUNÇÃO "RAND"   /////////:
RAND: serve para gerar valores aleatórios em um jogo de advinhação por exemplo. A cada vez que eu acerto ele gera outro numero diferente de advonhacao para o jogo;

Ex:
int main (){
int segundos = time (0);
srand(segundos);

int n1 = rand();
int n2 = rand();

printf("%d %d\n", n1, n2);
}



////////////////////////   FUNCAO "SWITCH"  ///////
EX: 
char letra;
main (void){
printf("A-palio\nB-gol\nC-onix\nEscolha:   ");
scanf("%c", &letra);
	system (cls);

switch(letra){
	case 'A':
	printf("Voce escolheu palio");
	break;

	case 'B':
	printf("Voce escolheu gol");
	break;

	case 'C':
	printf("Voce escolheu onix");
	break;

	default:
	printf("VALOR INVALIDO");
	
	}
}
oBS: O "DEFAULT" é o "se não"



///////FUNÇÃO DA (||)//////////
EX:
void cadastro() {
	printf("Dig nota 1: ");
	do {
		scanf("%f", &n1);
		if (n1 < 0.0 || n1 > 10.0)
			printf("Invalido! \nDig nota 1: ");
	} while (n1 < 0.0 || n1 > 10.0);
	printf("\nDig nota 2: ");

	OBS: O (||) significa ("OU"), ou seja, se a nota for menor que 0 (ou) maior que 10, ele vai mostrar a mensagem "Valor inválido".

/////////////////////////////////////////////////////////////////////////////

/////GETCH////
OBS: vai funcionar como um "system pause"
ex:
#include <stdio.h>
#include <stdlib.h>

char nomeAluno[11];

int main (void){
	printf("Digite o nome do aluno=  ");
	gets(nomeAluno);
	printf("Nome do aluno lido = %s\n", nomeAluno);
	getch();
}

///////////////////(strlen)
strlen: Serve para ler quantos caracteres tem na frase ou palavra
ex:
#include <stdio.h>
#include <string.h>
char s1[] = "Programacao em C";
int main() {
	// strlen conta o número de caracteres na string
	printf(s1);
	printf("\nTamanho da memoria s1: %lu\n", strlen(s1)); // Saída: 3
	return 0;
}
>quando executar, o programa vai exibir que a mensagem tem 16 caracteres.
>%lu: significa que quero verificar quantos números independente se é negativo ou positivo


///////////////(tolower)///////////////
tolower: Transforma tudo que eu escrevi em minúsculo, independente se escrevi em maiúsculo
ex:
#include <stdio.h>
#include <ctype.h>

char ch = 'A';
int main() {
	printf("Letra normal = %c \n",ch);
	// tolower converte o caractere para minúsculo
		printf("Minusculo: %c\n", tolower(ch)); // Saída: a
	return 0;
}		


>OU
int main(){
char nome [100];
int i;
printf("Digite um nome: ");
gets(nome);
for(i=0; nome[i]; i++){
nome[i]= tolower(nome[i]);  //////CONVERTE PARA MINÚSCULAS
}
return 0;

////////////////////////
for(i=0; nome[i]; i++){
nome[i]= toupper(nome[i]);  //////CONVERTE PARA MAIÚSCULAS




>quando executar o programa a letra 'A' vai aparecer minúscula
 

////////////(toupper)//////////////////
#include <stdio.h>
#include <ctype.h>
char ch = 'a';
int main() {
printf("Letra normal = %c \n",ch);
// toupper converte o caractere para maiúsculo
printf("Maiusculo: %c\n", toupper(ch)); // Saída: A
return 0;
}

>quando executar o programa a letra 'A' vai aparecer maiúscula

////////////////////(strcpy)///////////////////////
#include <stdio.h>
#include <string.h>
char s1[10];
char s2[] = "Ola";
int main() {
	printf("s1 = %s \n", s1);
	printf("s2 = %s \n\n", s2);
	// strcpy copia a string s2 para s1
	strcpy(s1, s2);
	printf("s1: %s\n", s1); // Saída: Olá
	printf("s2: %s\n", s2); // Saída: Olá
	return 0;
}

>Vai copiar a mensagem do s2 para o s1;
/////////////////////////////////////////////////////////
////////////(strncpy)////////////////////
>Copia apenas alguns caracteres da mensagem
Ex:
#include <stdio.h>
#include <string.h>
char s1[10];
char s2[] = "Ola Mundo";
int main() {
	// strncpy copia os primeiros caracteres de s2 para s1
	strncpy(s1, s2, 3);
	s1[3] = '\0'; // Adiciona o terminador nulo manualmente
	printf("s1: %s\n", s1); // Saída: Olá
	return 0;
}

>Aqui como selecionei apenas 3, vai aparecer apenas os primeiros 3 primeiros caracteres da nebnsagem, no caso "Olá"


///////////////////////////////////////////////////////////////
///////////////////////(strcat)///////////
ex:
#include <stdio.h>
#include <string.h>
char s1[20] = "Ola";
char s2[] = " Mundo";
int main() {
// strcat concatena s2 no final de s1
strcat(s1, s2);
printf("s1: %s\n", s1); // Saída: Olá Mundo
return 0;
}

>ele vai juntar a mensagem do S1 e do S2 ficando "Olá Mundo"
///////////////////////////////////////////////////////////////////////


////////////////Sinal de (^) para reconhecer apenas numeros
ex:
#include<stdio.h>
#include<string.h>
int main(){
	int idade;
	printf("Digite: ");
	scanf("%d%*[^\n]",&idade);
	printf ("Idade: %d\n",idade);
	return 0;
} 
>aqui se eu compilar e escrever "20 kkkk", o sistema vai ler apenas o número 20;


///////////////////////////////////////////////////////////////////////

////////////PARA ORDENAR LISTAS//////////
ex:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char nome[5][70];
	int i, nfunc = 0;
	while (1)
{
	printf("Digite o nome do funcionario (%d), ou de ENTER para finalizar\n", nfunc + 1);
	fgets(nome[nfunc], 70, stdin);
	if (strlen(nome[nfunc]) == 1)
	break;
	nfunc++;
	if (nfunc == 5)
	break;
}
	system("cls");
	printf("Sequencial dos nomes \n");
	for (i = 0; i < nfunc; i++)
	printf("%10d %s\n", i + 1, nome[i]);
}

>o %10 SERVE PARA DAR 10 ESPAÇOS 
/////////////////////////////////////////////////////////////////////////////

///MATRIZ E COLUNA /////
Ex:

int main(void){
//linha e coluna
int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%i", matriz[0][0]);
	printf("%i", matriz[0][1]);
	printf("%i", matriz[0][2]);
	printf("\n");
	
	printf("%i", matriz[1][0]);
	printf("%i", matriz[1][1]);
	printf("%i", matriz[1][2]);
	printf("\n");
	
	printf("%i", matriz[2][0]);
	printf("%i", matriz[2][1]);
	printf("%i", matriz[2][2]);

	return 0;
}		
>aqui eu pedi 3 linhas e 3 colunas

/////////////////////////////////////////////////////////////////////////////
2 LINHAS E 4 COLUNAS:
EX:
int main(void){
//linha e coluna
int matriz[2][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%i", matriz[0][0]);
	printf("%i", matriz[0][1]);
	printf("%i", matriz[0][2]);
	printf("%i", matriz[0][3]);
	printf("\n");
	
	printf("%i", matriz[1][0]);
	printf("%i", matriz[1][1]);
	printf("%i", matriz[1][2]);
	printf("%i", matriz[1][3]);
	printf("\n");


	return 0;
}		

/////////////////////////////////////////////////////////////////////////////
///OUTRA FORMA DE FAZER/////
#include<stdio.h>
#include<stdlib.h>

int linha, coluna;
int matriz [3][3];
int main(){
	for (linha=0; linha <3; linha++){
		for (coluna=0; coluna<3; coluna++ ){
			printf("Insira o valor: ");
			scanf("%d", &matriz[linha][coluna]);
		}
}
	printf("\n\n Veja a sua Matriz\n");
	for (linha=0; linha <3; linha++){
	for (coluna=0; coluna<3; coluna++)
	printf("%d\t", &matriz[linha][coluna]);
	printf("\n\n");
}
	system ("pause");
	return 0;	
}

/////////////////////////////////////////////////////////////////////////////
ESCOLHENDO OPÇÕES:
#include <stdio.h>

int senha;
int main(){

	printf("Escolha a sua senha:\n");
	printf("\t1 - 456\n");
	printf("\t2 - 223\n");
	printf("\t3 - 236\n");
	printf("\t4 - 123\n");
	scanf("%i", &senha);
	
	switch(senha){
		case 1:
			printf("Senha errada");
			break;
		case 2:
			printf("Senha errada");
			break;
		case 3:
			printf("Senha errada");
			break;	
		case 4:
			printf("Senha correta");
			break;
		default:
			printf("ERRO DE SELECAO");	
			
	}
}

///////////////////////////////////////////////////////////////////
#include <stdio.h>

char cidades[4][70];
int i;

int main(){
	for(i=1; i<=4; i++){
		printf("Cidades do papai noel: ");
		fflush(stdin);
		gets(cidades[i]);
		system("cls");
	}
	for(i=1; i<=4; i++){
		printd("Cidade: %s\n", cidades[i]);
	}
}

///////////////////////////////////////////////////////////////////