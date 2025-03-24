####CRIANDO AMBIENTE VIRTUAL####
# PARA INSTALAR NO TERMINAL
#SEGUIR OS SEGUINTES COMANDOS:
.\venv\(NOME DO ARQUIVO)\activate
pip install requests
pip freeze
pip freeze > requirements.txt


####RESPONSE####
>É a resposta que quero pegar das informações do https
>get= solicitar um recurso/dados
response 200:deu certo
response 404: não deu certo

####
for nome_do_restaurante, dados in dados_restaurante.items():
>aqui quero só os itens desse dado


nome_do_arquivo = f'{nome_do_restaurante}.json'
>vou nomear como nome do restaurante.json


with open(nome_do_arquivo,'w') as arquivo_restaurante:
>consigo manipular os arquivos dentro da aplicacao.
>o "w" serve para dizer o que quero fazer com o arquivo, no caso escrever


json.dump(dados,arquivo_restaurante,indent=4)
>crio um impor json
>serve para criar um arquivo (utilizo o json.dump)


####IMPORT REQUESTS:
> é uma biblioteca popular para fazer requisições HTTP.
EX: 
import requests
import json

url = 'https://guilhermeonrails.github.io/api-restaurantes/restaurantes.json'
response = requests.get(url)

############FAST API

##instalacao:
pip install fastapi
pip install uvicorn
pip freeze > requirements.txt ##para listar todas as dependências que precisamos.


############CRIANDO O ENDPOINT
##criaremos um arquivo main.py
>nesse aquivo importaremos o Fastapi
from fastapi import FastAPI

>Em seguida, vamos precisar de um objeto do FastAPI. Então, podemos digitar app = FastAPI().4
from fastapi import FastAPI

app = FastAPI()

from fastapi import FastAPI

app = FastAPI()

@app.get('/api/hello')

##Abaixo, podemos começar a criar uma função chamada def hello_world(). Esperamos que essa função retorne para nós (return), entre chaves e entre aspas simples, o texto "Hello World".
from fastapi import FastAPI

app = FastAPI()

@app.get('/api/hello')
def hello_world():
    return {'Hello':'World'}

##PARA COMEÇAR A RODAR A PÁGINA
uvicorn main:app --reload
>apos executar o terminal ele nos mostra um link e entramos nele
##será exibida uma mensagem falando que não foi encontrado.
## No caso, teríamos que colocar api/hello no endereço da barra de navegação
ex (antes):
http://127.0.0.1:8000/

ex (depois):http://127.0.0.1:8000/api/hello


#######separar o cardapio restaurante e colocar dentro do servidor
@app.get('/api/restaurantes/')
def get_restaurantes(restaurante: str = Query(None)):
    url = 'https://guilhermeonrails.github.io/api-restaurantes/restaurantes.json'
    response = requests.get(url)
    print(response)

>Query: serve para inserir o nome do restaurante que eu quero ##preciso adicionar junto ao 
from fastapi import FastAPI, Query
import requests

>dps vou no app.py e copio as informações para o main.py

##None
if response.status_code == 200:
        dados_json = response.json()
        if restaurante is None:
            return {'Dados': dados_json}
        
>se o restaurante não tiver nenhuma informacao passada eu preciso passar uma informacao



###Consultando endpoints##
uvicorn main:app --reload

>entramos no endereço da API(lembrando que temos 2:/api/hello, e o /api/restaurantes )


#se inserirmos: /api/restaurantes no endereço da barra de navegação ele vai me retornar os dados de todos os restaurantes
#se quisermos os dados de um restaurante específico ex: 127.0.0.1:8000/api/restaurantes/?restaurante=McDonald's 


#PARA ACESSARMOS A DOCUMENTAÇÃO DO NOSSO PROJETO
##vamos colocar o nunero padrão (127.0.0.1:8000 e adicionar o /docs)
ex: 127.0.0.1:8000/docs


######################
PARA REALIZAR A REQUISIÇÃO DA WEB
r = requests.get('https://api.github.com/events')
import requests
r

######################
#GET:  requisição GET para buscar as informações da página que será exibida.
#POST: É utilizada tilizada para enviar informações para um servidor
#PUT: é usada para substituir completamente um recurso no servidor.or exemplo, ao alterar todas as informações de seu perfil em alguma rede social (nome, foto, interesses, etc), é realizada uma requisição PUT.
#DELETE: como o nome sugere, é utilizada para excluir informações em um servidor. Por exemplo, ao excluir um post em uma rede social, é realizada uma requisição DELET
#PATCH: é utilizada para fazer alterações parciais em um recurso existente no servidor.





