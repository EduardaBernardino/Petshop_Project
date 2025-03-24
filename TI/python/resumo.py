#DECLARAR VARIAVEL
>no python voce pode colocar aspas duplas ou simples para declarar uma string
>a variavel é so escrever
ex:
x= 'pedro'

#MÉTODO DE SAÍDA E ENTRADA
print('pedro')
>sem espaco. Para impressão

input> entrada, é a pergunta
ex:
nome_cachorro = input('qual o nome do seu pet\n')
print(nome_cachorro)


########################
def> é uma function 

########################
class> é uma classe, como se fosse um dicionário

########################
dir> mostrará tudo: os atributos, métodos e propriedades de um objeto
vars> mostrará apenas alguns atributos

# código omitido

restaurante_praca = Restaurante()
restaurante_praca.nome = 'Praça'
restaurante_praca.categoria = 'Gourmet'

restaurante_pizza = Restaurante()

restaurantes = [restaurante_praca, restaurante_pizza]

print(dir(restaurante_praca)) ##retorna PS C:\Users\nome\Desktop\oo-sabor-express> python modelos/restaurante.py

['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'ativo', 'categoria', 'nome']

--------------------------------------

ex:
# código omitido

restaurante_praca = Restaurante()
restaurante_praca.nome = 'Praça'
restaurante_praca.categoria = 'Gourmet'

restaurante_pizza = Restaurante()

restaurantes = [restaurante_praca, restaurante_pizza]

print(vars(restaurante_praca)) ##saída {'nome': 'Praça', 'categoria': 'Gourmet'}


#############################################################
class Musica:
    nome = ''
    artista = ''
    duracao = int


musica1 = Musica()
musica1.nome = 'Bohemian Rhapsody'
musica1.artista = 'Queen'
musica1.duracao = 355

musica2 = Musica()
musica2.nome = 'Imagine'
musica2.artista = 'John Lennon'
musica2.duracao = 183

musica3 = Musica()
musica3.nome = 'Shape of You'
musica3.artista = 'Ed Sheeran'
musica3.duracao = 234


#############################################################
ex:
class Restaurante:
    def __init__(self, nome, categoria):
        self.nome = nome
        self.categoria = categoria
        self.ativo = False

restaurante_praca = Restaurante('Praça', 'Gourmet')
restaurante_pizza = Restaurante('Pizza Express', 'Italiana')

restaurantes = [restaurante_praca, restaurante_pizza]

print(vars(restaurante_praca))##saída: {'nome': 'Praça', 'categoria': 'Gourmet', 'ativo': False}
print(vars(restaurante_pizza)) ##saída:{'nome': 'Pizza Express', 'categoria': 'Italiana', 'ativo': False}



#############################################################
>str: trata a classe como um texto
>init: serve para referenciar as funcoes (ex:nome, categoria)
class Restaurante:
    def __init__(self, nome, categoria):
        self.nome = nome
        self.categoria = categoria
        self.ativo = False


    def __str__(self):
     return f'{self.nome} | {self.categoria}'

restaurante_praca = Restaurante('Praça', 'Gourmet')
restaurante_pizza = Restaurante('Pizza Express', 'Italiana')

restaurantes = [restaurante_praca, restaurante_pizza]

print(restaurante_praca) #retorna: Praça | Gourmet
print(restaurante_pizza)#retorna: Pizza Express | Italiana


#############################################################
append: serve para inserir algum conteúdo na lista
ex:

class Restaurante:
    restaurantes = []

    def __init__(self, nome, categoria):
        self.nome = nome
        self.categoria = categoria
        self.ativo = False
        Restaurante.restaurantes.append(self)
    
    def __str__(self):
        return f'{self.nome} | {self.categoria}'
    
    def listar_restaurantes():
        for restaurante in Restaurante.restaurantes:
            print(f'{restaurante.nome} | {restaurante.categoria} | {restaurante.ativo}')

restaurante_praca = Restaurante('Praça', 'Gourmet')
restaurante_pizza = Restaurante('Pizza Express', 'Italiana')

Restaurante.listar_restaurantes()

#############################################################
rjust(): consigo justificar o texto a direita e dentro do parenteses eu coloco o numero que se refere a quantos espaços eu quero dar
llust(): consigo justificar o texto a esquerda

#############################################################
>quando eu coloco underline por exemplo (_ativo) serve para o usuário não ter acesso as informações totais, da mais segurança ao elemento
 __init__(self, nome, categoria):
    self.nome = nome
    self.categoria = categoria
    self._ativo = False
    Restaurante.restaurantes.append(self)


#############################################################
>strip: serve para retirar os espaços 
ex:
texto = '  Geovana Alessandra dias Sanyos '
texto.strip()  #retorna 'GEOVANA ALESSANDRA DIAS SANYOS'

title: serve para deixar todas as primeiras letras ficarem maiúsculas 

>upper: serve para deixar todas as letras maiúsculas
ex:
texto = '  Geovana Alessandra dias Sanyos '
texto.upper()  #retorna ' GEOVANA ALESSANDRA DIAS SANYOS '

#############################################################
>para importar informações de um arquivo para outro em python
ex:
from modelos.restaurante import Restaurante

>obs: se der erro:

import importlib
import app  # Seu módulo

# Recarregar o módulo após fazer alterações
importlib.reload(app)

from modelos.restaurante import Restaurante

#############################################################
#SOMA> sum();

#############################################################
##FUNÇÃO ROUND:
>round: serve para arredondar valores
ex:
 media = round(soma_das_notas / quantidade_de_notas, 1)
>o "1" significa a quantidade de casas que vou querer após a vírgula


#############################################################
## SUPER
>vai permitir que voce acesse informacoes de outra classe:
ex:
from modelo.cardapio.item_cardapio import ItemCardapio

class Prato(ItemCardapio):
    def __init__(self, nome, preco, descricao):
        super().__init__(nome, preco)


        
#############################################################
#exercitando: Com base no que vimos nessa aula sobre herança, crie uma classe Banco com dois atributos: nome e endereco. Em seguida, derive uma classe chamada Agencia que herda os atributos da classe Banco e inclua um atributo adicional chamado numero. Ambas as classes devem ter apenas o construtor.
class Banco:
    def __init__(self, nome, endereco):
        self.nome = nome
        self.endereco = endereco
   
   from banco import Banco

class Agencia(Banco):
    def __init__(self, nome, endereco, numero):
        super().__init__(nome, endereco)
        self.numero = numero    

    


#############################################################
##INSISTANCE
>essa funcao pega o item que estamos colocando e compara com o item que queremos para verificar se faz parte daquela classe
ex:
 def adicionar_no_cardapio(self, item):
        if isinstance(item, ItemCardapio):
         self._cardapio.append(item)


#############################################################
##ENUMERATE
>retorna o índice e o item que estamos procurando
ex:
 @property
    def exibir_cardapio(self):
        print(f'Cardapio do restaurante {self._nome}\n')
        for i, item in enumerate(self._cardapio, start=1):
            mensagem = f'{i}.Nome:{item._nome}| Preço: R${item._preco}'
            print(mensagem)
            if hasattr()


#############################################################
##HASATTR:
>se há um atributo. Ex: se tem o atributo tamanho entao é um prato e se tem o atributo sabor é um suco
ex:


#############################################################
##CLASSE ABSTRATA: quando eu quero que todas as classes tenham o mesmo método que foi criado, ex: descconto
>todas as classes criadas dentro da classe mae deve seguir um metodo especifico 
ex(aplicando desconto):
from abc import ABC, abstractmethod

class ItemCardapio(ABC):
    def __init__(self, nome, preco):
        self._nome = nome
        self._preco = preco

@abstractmethod
def aplicar_desconto(self)
pass

#############################################################
#UM VALOR ÚNICO PARA MÚLTIPLAS VARIÁVEIS
EX:
x = y = z = "Orange"
print(x)
print(y)
print(z) 

EX:
fruits = ["apple", "banana", "cherry"]
x, y, z = fruits

print(x) #apple
print(y)#banana
print(z)#cherry

#############################################################
##Para determinar quantos itens uma lista possui - len():
thislist = ["apple", "banana", "cherry"]
print(len(thislist)) #retorna 3


#############################################################
#PEGANDO O ÚLTIMO E PENULTIMO ITEM DA LISTA:
thislist = ["apple", "banana", "cherry"]
print(thislist[-1]) #retorna cherry

#############################################################
##ESPECIFICANDO OS ITENS DA LISTA QUE QUERO PRINTAR
EX:
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:5]) #['cereja', 'laranja', 'kiwi'

EX:
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[:4]) #RETORNA "apple", "banana", "cherry", "orange"

 ########################################################
 ###RETORNANDO DE UM ÍNDICE DETERMINADO ATÉ O FINAL
 Ex:
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:]) #retorna ['cereja', 'laranja', 'kiwi', 'melão', 'manga']
#Remember that index 0 is the first item, and index 2 is the third

########################################################
##INSERIR ITEM NA LISTA
EX:
    thislist = ["apple", "banana", "cherry"]
thislist.insert(2, "watermelon")
print(thislist) #retorna: ['apple', 'banana', 'watermelon', 'cherry']

#############################################################
insert(): # insere um item no índice especificado
    ex:
thislist = ["apple", "banana", "cherry"]
thislist.insert(1, "orange")
print(thislist)

#############################################################
remove() #remove o item especificado
ex:thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)

#############################################################
pop() #remove o índice especificado
ex:
thislist = ["apple", "banana", "cherry"]
thislist.pop(1)
print(thislist)

#############################################################
clear() #serve para esvaziar a lista
ex:
thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist) #retorna []

#############################################################
#para imprimir os itens da lista, um por um
thislist = ["apple", "banana", "cherry"]
for x in thislist:
 print(x)
 
#############################################################
sort() #classifica a lista em ordem alfabética crescente
ex:
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort()
print(thislist) #retorna ['banana', 'kiwi', 'mango', 'orange', 'pineapple']
#############################################################
reverse = True #classificar em ordem decrescente
ex:
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort(reverse = True)
print(thislist)
#############################################################

copy() #para copiar uma lista
thislist = ["apple", "banana", "cherry"]
mylist = thislist.copy()
print(mylist) #retorna ["apple", "banana", "cherry"]

#############################################################
#RANGE: função que gera uma sequência de números
ex:
for i in range(5):
print(i) #retorna: 0,1,2,3,4

ex:
for i in range(2, 6):
print(i) #retorna: 2,3,4,5

ex:
for i in range(0, 10, 2): 
print(i) #retorna:  0,2,3,4,6,8 > o. Ou seja, o range vai gerar números começando do 0 até antes de 10, mas não incluindo o 10.

#############################################################
#calculando exponenciação
ex:
num1 = 2**3
print(num1) #retorna 8 > (2*2*2 = 8)

#############################################################
#TYPE > para me informar qual tipo de variável é
ex:
s1 = 'Alura'
s2 = "Alura"
print(type(s1),type(s2)) #retorna <class 'str'> <class 'str'>

#############################################################
#REPLACE: substitui todas as ocorrências do texto antigo para um novo
ex:
texto = ' Geovana Alessandra dias Sanyos '
texto.replace('y','t') #retorna ' Geovana Alessandra dias Santos '

#############################################################
#ADD 
thisset = {"apple", "banana", "cherry"}
thisset.add("orange")
print(thisset) #{'cherry', 'apple', 'orange', 'banana'}

#############################################################
#UNIR 2 OU MAIS CONJUNTOS: union()
set1 = {"a", "b", "c"}
set2 = {1, 2, 3}

set3 = set1.union(set2)
print(set3) #retorna: {'c', 'a', 'b', 3, 1, 2}


