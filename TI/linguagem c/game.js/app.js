let listadenumerossorteados;
let numeroSecreto=gerarNumeroAleatorio();
let tentativas = 1;


function exibirTextoNaTela(tag){
    let campo = document.querySelector(tag);
    campo.innerHTML = texto;
}
function exibirMensagemInicial(){
exibirTextoNaTela('h1', 'Jogo do número secreto')
exibirTextoNaTela('p', 'Escolha um número entre 1 e 10')
}

exibirMensagemInicial();

let campo = document.querySelector(tag)
campo.innerHTML= texto

function verificarChute(){ 
    let chute = document.querySelector ('input').value;

    if (chute == numeroSecreto){
        exibirTextoNaTela('h1', 'acertou');
        let palavraTentativa = tentativas >1? 'tentativas' : 'tentativa';
       let mensagemTentativas = 'Você descobriu o numero secreto com ${tentativas} ${palavraTentativa}!';
       exibirTextoNaTela('p', mensagemTentativas);
       document.getElementById('reiniciar').removeAttribute ('disabled');

    }else{
        if (chute > numeroSecreto){
        exibirTextoNaTela('p', 'O numero secreto é menor');
    }else{
        exibirTextoNaTela('p', 'O numero secreto é maior');
    }
    tentativas++;
    limparCampo();
}
}

function gerarNumeroAleatorio(){
    let numeroescolhido= parseInt(Math.random() * 10+1);
    if (listadenumerossorteados.includes(numeroescolhido)){
    return gerarNumeroAleatorio();
    }else{
        listadenumerossorteados.push
        return numeroescolhido;
    }
}
function limparCampo(){
    chute = document.querySelector('input');
        chute.value = '';
    
}
function reiniciarJogo(){
    numeroSecreto = gerarNumeroAleatorio();
    limparCampo();
    tentativas =1;
    exibirMensagemInicial;
    document.getElementById('reiniciar').setAttribute('disabled', true);

}