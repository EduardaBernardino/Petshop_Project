alert('Boas Vindas ao jogo do número secreto'); 
let numeroSecreto = 5;
console.log (numeroSecreto);
let tentativas;
let chute 

while(chute !=numeroSecreto){
    chute = prompt(`Escolha um numero entre 1 e 10`);
    
    if (chute == numeroSecreto){
        break;
    } else{
        if(chute > numeroSecreto){
        alert (`O numero secreto e menor que o chute ${chute}`);
    }else{
        alert(`O numero secreto e maior que ${chute}`);
    }
    }
    let palavraTentativa = 1? 'tentativas': 'tentativa';
    alert(`Isso ai! Você descobriu o numero secreto ${numeroSecreto} com ${tentativas} tentativas`);
    //if (tentativas >1){
        //alert(`Isso ai! Você descobriu o numero secreto ${numeroSecreto} com ${tentativas} tentativas`);
    //}else{
       // alert(`Isso ai! Você descobriu o numero secreto ${numeroSecreto} com ${tentativas} tentativa`);
   // }
    
//}