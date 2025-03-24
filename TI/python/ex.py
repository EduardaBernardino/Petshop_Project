class Banco:
   def __init__(self, nome, endereco):
       self.nome = nome
       self.endereco = endereco
   

    from Banco import Banco
   
class Agencia(banco):
    def __init__(self, nome, endereco, numero):
       self.nome = nome
       self.endereco = endereco
       self.numero = numero