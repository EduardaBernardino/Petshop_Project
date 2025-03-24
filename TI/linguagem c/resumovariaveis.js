//FORMAS DE DECLARAR UMA VARIÁVEL///////////
> let, const, var;
////////////////////////////////////////////////////////////////////////////////////////////

//DIFERENÇA ENTRE O ALERT E O CONSOLE.LOG////////////////////
>alert é usado para interagir diretamente com o usuário por meio de um pop-up.
>console.log é uma ferramenta de desenvolvimento //visível apenas para os desenvolvedores
////////////////////////////////////////////////////////////////////////////////////////////

//SOMANDO VARIAVEIS////////////////////
const notaPrimeiroBi= 8;
const notaSegundoBi= 6.3;

const total = notaPrimeiroBi + notaSegundoBi;
console.log(total);

////////////////////////////////////////////////////////////////////////////////////////////
//toFixed(PARA DEFINIR QUANTAS CASAS NUMÉRICAS EU QUERO) e parseInt (PARA CONVERTER UMA STRING PARA UM NÚMERO)////////////////////
EX:
const notaPrimeiroBi= 8;
const notaSegundoBi= 6.3;
const notaTerceiroBi= Number.parseInt('5');
const notaQuartoBi= -2; 

const total = (notaPrimeiroBi + notaSegundoBi + notaTerceiroBi + notaQuartoBi)/4;
console.log('a média é '+ total.toFixed(2));

>Obs: Se não fosse acrescentado o (toFixed) o valor final seria 4.325, mas com ele adicionando apenas 2 casas fica 4.33;
>Obs: acrescentando o (Number.parseInt) o '5' que era apenas uma string vira um numero inteiro. Obs:string é utilizada para insrerir caracteres.


////////////////////////////////////////////////////////////////////////////////////////////
/////////DEIXAR TODAS AS VARIÁVEIS EM CAIXA ALTA > toUpperCase()///
ex:
const estudante;
const senha = 'SenhaSegura123' + estudante.toUpperCase();

console.log(senha);

>Quando eu compilar vai ficar: SenhaSegura123EDUARDA
>O nome do estudante, como eu inseri a variavel (toUpperCase), ele vai ficar todo em maiúsculo.


////////////////////////////////////////////////////////////////////////////////////////////
//////TIPO BOOLEANO//////
>é um tipo especial que só tem 2 valores, true ou false;
ex:
const estudante = 'Fernando';
const estaAprovado = true;

if(estaAprovado === true){
   console.log('Parabens, boas festas');
}else{
   console.log('REPROVADO, boas festas');
}
////////////////////////////////////////////////////////////////////////////////////////////
/////NULL E UNDEFINED//////
>UNDEFINED: quando não foi atribuido valor a variavel;
>NULL: quando não tem nenhum valor para a variavel mas ela existe;

ex UNDEFINED:
let nomeEstudante;
console.log(nomeEstudante);
console.log(typeof nomeEstudante);

ex NULL:
let telefoneEstudante = null;
console.log(telefoneEstudante +3);
>Quando eu compilar vai me retornar o valor 3 porque o null funciona como o 0, como se o espaço estivesse em branco;


////////////////////////////////////////////////////////////////////////////////////////////
let exemplo = 10; // exemplo é do tipo número (Number)
console.log(exemplo); // Saída: 10

exemplo = 'Olá, mundo!'; // agora exemplo é uma string (String)
console.log(exemplo); // Saída: Olá, mundo!

exemplo = true; // exemplo agora é um booleano (Boolean)
console.log(exemplo); // Saída: true

////////////////////////////////////////////////////////////////////////////////////////////
Number("1"); // retorna o número 1 
Number("Alura"); // retorna NaN
Number(undefined); // retorna NaN
Number(null); // retorna 0


////////////////////////////////////////////////////////////////////////////////////////////
///INCLUDES/////
>Determina se um conjunto de caracteres pode ser encontrado dentro de uma string, retornando true ou false
ex:
'estudando JavaScript'.includes('Java'); // retorna true

////////////////////////////////////////////////////////////////////////////////////////////
/////toLowerCase() >CONVERTE TODOS OS CARACTERES EM LETRAS MINÚSCULAS///
EX:
'POR FAVOR, NÃO GRITE'.toLowerCase(); // retorna 'por favor, não grite'


////////////////////////////////////////////////////////////////////////////////////////////
///// texto.toUpperCase() >CONVERTE TODOS OS CARACTERES EM LETRAS MAIÚSCULAS///

///////////////////////////////////////////////////////////////////////////////////////////
////////length > MOSTRA QUANTAS LETRAS TEM A FRASE;
EX:
const frase = 'como o dia ta lindo';
console.log(frase.length); // Comprimento da frase
console.log(frase.toUpperCase()); // Frase em constras maiúsculas

>Quando compilar vai mostrar o numero 19 que é a quantidade de letras da frase.

///////////////////////////////////////////////////////////////////////////////////////////
//////SINAL DE "OU" > ||
Ex:
const notaFinal =7;
const faltas =3;
if (notaFinal < 7 || faltas > 4){
    console.log('reprovado, boas festas');
}else{
    console.log('não foi reprovado por falta');
}

///////////////////////////////////////////////////////////////////////////////////////////
//////SINAL DE "E" > &&
Ex:
const notaFinal =6;
const faltas =5;
if (notaFinal < 7 && faltas > 4){
    console.log('reprovado, boas festas');
}else{
    console.log('não foi reprovado por falta');
}

///////////////////////////////////////////////////////////////////////////////////////////
//////OPERADOR DE NEGAÇÃO (!)///////////
EX:
const notaFinal = 6;
const faltas = 5; 
const advertencias = 0;

if (notaFinal < 7 && faltas > 4) {
  console.log('reprovado, boas festas');
} else {
  console.log('não foi reprovado por falta');
}

if (faltas <=2 && !advertencias){
  console.log('recebeu bônus');
} else {
  console.log('não recebeu bônus');
}
>A pessoa estudante recebeu bônus, porque o valor de advertencias é um valor falso. Ele é um valor falso, porque é um zero numérico. E quando colocamos a exclamação, colocamos o operador de negação na frente dele, estamos negando um valor falso e esse valor se torna verdadeiro.

///////////////////////////////////////////////////////////////////////////////////////////
OPERADOR DE COMPARAÇÃO "OU" (===)///////////
ex:
const estaAprovado = true;

if('0'===0){
    console.log('passou na comparação')
}else{
    console.log('não passou na comparação ')
}

>Obs: quando eu compilar vai aparecer "não passou na comparação" porque o operador de comparação entende que o '0' é uma string e não um número;
///////////////////////////////////////////////////////////////////////////////////////////
//// DOIS PONTOS SE A CONDIÇÃO FOR FALSE
//condição ?      caso 'true'    :     caso 'false'
valor < 50 ? 'valor insuficiente' : 'valor suficiente';

///////////////////////////////////////////////////////////////////////////////////////////
//parâmetros/argumentos
//retorno

function exibeNomeEstudante(nome) {
   console.log(nome);
}

exibeNomeEstudante('Caroline');
exibeNomeEstudante('Ana');

>Obs: para eu conseguir exibir exibir qualquer nome eu teria que utilizar esses "paramentros ou argumentos" 

///////////////////////////////////////////////////////////////////////////////////////////
//parâmetros/argumentos
//retorno

function exibeInfosEstudante(nome, nota){
   return `o nome é ${nome} e a nota é ${nota}`;
}

console.log(exibeInfosEstudante ('Caroline', 10)); //retorna: o nome é Caroline e a nota é 10
console.log(exibeInfosEstudante('Ana', 7)); // retorna: o nome é Ana e a nota é 7.

///////////////////////////////////////////////////////////////////////////////////////////
//parâmetros e retorno
function dividir(dividendo, divisor) {
   return dividendo / divisor; //return tem a função de 'output'
  }
  
  const resultado = dividir(10, 2);
  console.log(`o resultado é ${resultado}`); // o resultado é 5


///////////////////////////////////////////////////////////////////////////////////////////
//expressão de função
  function estudanteReprovou(notaFinal, faltas) {
   if (notaFinal < 7 && faltas > 4) {
     return true;
   } else {
     return false;
   }
 }


 ///////////////////////////////////////////////////////////////////////////////////////////
 //arrow function (função de seta)
 const estudanteReprovou = (notaFinal, faltas) => {
   if (notaFinal < 7 && faltas > 4) {
     return true;
   } else {
     return false;
   }
 }

 //>Se tivermos apenas uma linha, por exemplo, para dar um return no nome, podemos escrever apenas nome, suprimindo tanto as chaves quanto a palavra-chave return:
 const exibeNome = (nome) => nome;
 ///////////////////////////////////////////////////////////////////////////////////////////
 //exercitando:
 Crie uma função que receba três números como parâmetros e determine qual é o maior entre eles. Utilize estruturas condicionais (if, else) para comparar os valores e determinar o maior. Imprima o maior valor no console.
 ex:
 function encontraMaiorValor(num1, num2, num3) {
   let maior = num1; // Assumindo inicialmente que num1 é o maior
 
   if (num2 > maior) {
       maior = num2;
   }
 
   if (num3 > maior) {
       maior = num3;
   }
 
   return maior;
 }
 
 console.log(encontraMaiorValor(12, 56, 32)); // 56

///////////////////////////////////////////////////////////////////////////////////////////
///Math.pow()
>é usada para elevar um número à potência de outro. Por exemplo, 2³ resultaria em 8.
ex:
const calculaPotencia = (base, expoente) => {
   return Math.pow(base, expoente);
};

const base = 2;
const expoente = 3;

const resultado = calculaPotencia(base, expoente);
console.log(`O resultado de ${base} elevado a ${expoente} é: ${resultado}`); // Saída: O resultado de 2 elevado a 3 é: 8

///////////////////////////////////////////////////////////////////////////////////////////
//ARRAY////
const nota1 = 10;
const nota2 = 6.5;
const nota3 = 8;
const nota4 = 7.5;

const notas = [10, 3.5, 8, 7.5];
const media = (notas[0] + notas[1] + notas[2]+ notas[3])/ notas.length;
console.log(media);

>para acessar os itens da lista eu uso sempre [] e começa sempre no índice 0;
>length: especifica o tamanho de uma Array, ou seja, o número de elementos.
ex:
// índice     0   1   2   3
const nums = [50, 43, 12, 98];
console.log(nums.length) // retorna 4

///////////////////////////////////////////////////////////////////////////////////////////
//PUSH ////
>Serve para adicionar um valor no Array
>obs: ele vai sempre adicionar ao último elemento da lista
ex:
const notas = [10, 6, 8];

notas.push(7);

const media = (notas[0] + notas[1] + notas[2]+ notas[3])/ notas.length;

console.log(media);

///////////////////////////////////////////////////////////////////////////////////////////
//POP// 
>serve para remover elementos da lista
>vai remover sempre o último elemento da lista
ex:
const notas = [10, 6, 8, 5.5, 10];

notas.pop();


const media = (notas[0] + notas[1] + notas[2]+ notas[3])/ notas.length;
console.log(media);


///////////////////////////////////////////////////////////////////////////////////////////
//SLICE //
>serve para dividir a Array
ex:
const listaEstudantes = ['Eduarda', 'Julia', 'bruno', 'Pedro', 'Lucas', 'Mateus', 'João', 'Carla', 'Maria', 'Joana', 'Juliana'
  , 'Luiza', 'Ximenes', 'Carlos', 'Davi', 'Karlos', 'Camila', 'Eduarda', 'Fabiana',
       'Samuel', 'Gabriel'];
  
  const sala1 = listaEstudantes.slice(0, listaEstudantes.length/2);
  const sala2 = listaEstudantes.slice(listaEstudantes.lenght/2);
  
  console.log(sala1);
  console.log(sala2);
  //retorna:
  'Eduarda', 'Julia', 
  'bruno',   'Pedro', 
  'Lucas',   'Mateus',
  'João',    'Carla', 
  'Maria',   'Joana'  
]
[
  'Eduarda', 'Julia',   'bruno',  
  'Pedro',   'Lucas',   'Mateus', 
  'João',    'Carla',   'Maria',  
  'Joana',   'Juliana', 'Luiza',  
  'Ximenes', 'Carlos',  'Davi',   
  'Karlos',  'Camila',  'Eduarda',
  'Fabiana', 'Samuel',  'Gabriel' 

///////////////////////////////////////////////////////////////////////////////////////////
//SPLICE
>Serve para excluir os elementos selecionados da lista;
EX:
const listaEstudantes = ['Eduarda', 'Julia', 'bruno', 'Pedro', 'Lucas', 'Mateus', 'João', 'Carla', 'Maria', 'Joana', 'Juliana'];

listaEstudantes.splice(1,2);
console.log(listaEstudantes);
//retorna:
'Eduarda', 'Pedro', 
'Lucas',   'Mateus',
'João',    'Carla', 
'Maria',   'Joana', 
'Juliana'
]

///
ex:
const listaEstudantes = ['Eduarda', 'Julia', 'bruno', 'Pedro', 'Lucas', 'Mateus', 'João', 'Carla', 'Maria', 'Joana', 'Juliana'];

listaEstudantes.splice(1,2, 'Rodrigo');
console.log(listaEstudantes);
>se eu adicionar o 'Rodrigo' ele é adicionado na lista;

///////////////////////////////////////////////////////////////////////////////////////////
//CONCAT
>concat serve para concatenar "unificar" listas que estao separadas;
ex:
const salaJS = ['Evaldo', 'Camis', 'Mari'];
const salaPython = ['Ju', 'Leo', 'Raquel'];

const salasUnificadas = salaJS.concat(salaPython);
console.log(salasUnificadas);
//retorna:
'Evaldo', 'Camis', 'Mari', 'Ju', 'Leo', 'Raquel' 

///////////////////////////////////////////////////////////////////////////////////////////
>aqui eu consigo localizar os elementos da lista
const alunos = ['João', 'Juliana', 'Caio', 'Ana'];
const medias = [10, 8, 7.5, 9];

const lista = [alunos, medias];

console.log(
`a aluna da posição 1 da lista é: ${lista[0][1]}.
a nota dessa aluna é ${lista[1][1]}` //retorna: Juliana, 8
);

console.log(lista[0]);

///////////////////////////////////////////////////////////////////////////////////////////
//PROCURANDO ALGO NA LISTA
//indezOf( Ele vai retornar o índice da primeira ocorrência do valor fornecido)
Ex:
const alunos = ['João', 'Juliana', 'Caio', 'Ana'];
const medias = [10, 8, 7.5, 9];

const lista = [alunos, medias];
function exibeNomeENota(aluno) {
  if (lista[0].includes(aluno)) {
      const indice = lista[0].indexOf(aluno);
      const mediaAluno = lista[1][indice];
      console.log('${aluno} tem a média ${mediaAluno}');
      } else {
      console.log('Estudante não existe na lista');
      }
  }
  
exibeNomeENota('Juliana');
exibeNomeENota('Vini');

///////////////////////////////////////////////////////////////////////////////////////////
//DESESTRUTURANDO A LISTA//
ex:

const alunos = ['João', 'Juliana', 'Caio', 'Ana'];
const medias = [10, 8, 7.5, 9];

const lista = [alunos, medias];

function exibeNomeENota(aluno) {
  if (lista[0].includes(aluno)) {
      const [alunos, medias] = lista;
      const indice = alunos.indexOf(aluno);
      const mediaAluno = meidas[indice];
      console.log(`${aluno} tem a média ${mediaAluno}`);
      } else {
      console.log('Estudante não existe na lista');
      }
  }
  
exibeNomeENota('Juliana');
exibeNomeENota('Vini');

///////////////////////////////////////////////////////////////////////////////////////////