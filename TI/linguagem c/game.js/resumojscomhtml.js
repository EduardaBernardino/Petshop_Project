//PARA CRIAR UM VARIÁVEL////
>Inserir o "let"
ex:
let numeroAleatorio;
////////////////////////////////////////////////////////

////mudando o título do meu aplicativo//
ex:
let titulo = document.querySelector('h1');
titulo.innerHTML = 'Jogo do número secreto';

let paragrafo = document.querySelector('p');
paragrafo.innerHTML = 'Escolha um número entre 1 e 10';

function verificarChute(){
    console.log('o botao foi clicado')
}

/////////////////////////////////////
///// FUNCTION////////
>Serve para realizar uma função entre os parenteses
ex:
function exibirTextoNaTela(tag){
    let campo = document.querySelector(tag)
    campo.innerHTML = texto;
}

exibirTextoNaTela('h1')
exibirTextoNaTela('p')

/////////////////////////////////////////////////////////////////
/////////Math.random////////
>serve para gerar um número aleatório
ex:
let numeroSecreto=gerarNumeroAleatorio();

function gerarNumeroAleatorio(){
    return parseInt(Math.random() * 10+1);
}
>Vai gerar um numero aleatorio de 1 a 10. Obs: o "parseInt" serve para gerar um número inteiro 
>Obs: devo criar uma variavel antes para gerar esse valor
/////////////////////////////////////////////////////////////////////////


///////////CONSOLE.LOG///////////////
>vai imprimir a mensagem para o usuario
ex: 
function verificarChute(){
    console.log('o botao foi clicado');
}

///////////////////////////////////////////////////////////////////////
/////////PARA SELECIONAR ELEMENTO DO HTML (BOOLEAN: o valor pode ser verdadeiro ou falso)////////
>Quando quero alterar um elemento que esta dentro do html e integrá-lo ao Java

ex:
function verificarChute(){
    let chute = document.querySelector ('input').value;
    console.log(chute == numeroSecreto);

>aqui ele vai pegar a linha onde ta o input no html e atribuir se o valor que o usuário colocou é true ou false;

///////////////////////////////////////////////////////////////////////////////////////
///////////EXERCITANDO: FAÇA UMA FUNÇÃO QUE VERIFIQUE SE O NÚMERO É NEGATIVO OU POSITIVO
EX:
function verificarNumero (numero){

    if(numero>0){
        console.log('O numero é positivo');
    }
    else if(numero <0){
        console.log('O numero é negativo');
    
    }else{
        console.log('O numero é zero');
    }
    }
    ///////////////////////////////////////////////////////////////////////////////////
    ////////////EXERCITANDO:Crie uma função que exibe "Olá, mundo!" sem console.
   
    function exibirOla() {
     console.log("Olá, mundo!");
}
exibirOla();
///////////////////////////////////////////////////////////////////////////////////
    ////////////Crie uma função que receba um nome como parâmetro e exiba "Olá, [nome]!" sem console.////
    
    function exibirOlaNome(nome) {
      console.log(`Olá, ${nome}!`);
    }
    
    exibirOlaNome("Alice");
//////////////////////////////////////////////////////////////////////////////////
    ////////////Crie uma função que recebe um número como parâmetro e retorna o dobro desse número./////
    function calcularDobro(numero) {
        return numero * 2;
      }
      
      let resultadoDobro = calcularDobro(5);
      console.log(resultadoDobro);
//////////////////////////////////////////////////////////////////////////////////
    ////////////Crie uma função que recebe três números como parâmetros e retorna a média deles./////
    function calcularMedia(a, b, c) {
        return (a + b + c) / 3;
      }
      
      let media = calcularMedia(4, 7, 10);
      console.log(media);
//////////////////////////////////////////////////////////////////////////////////
    ////////////Crie uma função que recebe dois números como parâmetros e retorna o maior deles./////
    function encontrarMaior(a, b) {
        return a > b ? a : b;
      }
      
      let maiorNumero = encontrarMaior(15, 9);
      console.log(maiorNumero);
//////////////////////////////////////////////////////////////////////////////////
    ////////////Crie uma função que recebe um número como parâmetro e retorna o resultado da multiplicação desse número por ele mesmo./////
    function quadrado(numero) {
        return numero * numero;
      }
      
      let resultado = quadrado(2);
      console.log(resultado);  
      //////////////////////////////////////////////////////////////////////////////////


      /////////////como usar o "se não" de forma mais simplificada
      > vou utilizar o (:)
      Ex:
      let palavraTentativas = tentativas >1? 'tentativas' : 'tentativa'

      >Ou seja, se tentativas for maior que 1 exiba a mensagem ("tentativas"), SE NÃO ("tentativa");
      //////////////////////////////////////////////////////////////////////////////////


    ////////////ARRAY = LISTAS////////////////
    ex:
    const listaFrutas = [];
frutas.push("banana", "apple", "peach");
console.log(listaFrutas.length); 

>listaFrutas.length: exibe a quantidade de elementos de uma lista.
>Se eu colocar listaCompras[2] vai exibir o item "peach". OBS: o item 0 é sempre o primeiro da lista, ou seja, a lista começa em 0,1,2..
ex:
frutas.push("banana", "apple", "peach");
console.log(listaFrutas.length[2]); 



>Você pode criar uma array em JavaScript declarando uma variável e atribuindo-lhe valores entre colchetes [].
EX: let frutas = ["Maçã", "Uva", "Laranja"];


/////ARRAY - PUSH (PARA ACRESCENTAR UM ELEMENTO QUE NÃO TINHA NA LISTA)////
EX:
let frutas = ["Maçã", "Uva", "Laranja"];
frutas.push("Morango");
console.log(frutas); // Saída: ["Maçã", "Uva", "Laranja", "Morango"]


/////ARRAY - POP (PARA REMOVER O ÚLTIMO ELEMENTO DA LISTA)////
EX: 
let frutas = ["Maçã", "Uva", "Laranja"];
frutas.push("Morango");
console.log(frutas); // Saída: ["Maçã", "Uva", "Laranja", "Morango"]
frutas.pop();
console.log(frutas); // Saída: ["Maçã", "Uva", "Laranja"]