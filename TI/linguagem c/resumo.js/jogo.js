alert('Boas Vindas ao jogo do número secreto'); 
let numeroSecreto = 5;
console.log (numeroSecreto)
let chute 

while(chute !=numeroSecreto){
    chute = prompt(`Escolha um numero entre 1 e 10`);
    
    if (chute == numeroSecreto){
    alert(`Isso ai! Você descobriu o numero secreto ${numeroSecreto}`);
    } else{
        if(chute > numeroSecreto){
        alert (`O numero secreto e menor que o chute ${chute}`);
    }else{
        alert(`O numero secreto e maior que ${chute}`);
    }
    }
}