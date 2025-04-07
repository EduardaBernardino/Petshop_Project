package petshopvirtual;

//Aqui será criada a Classe Passaro (classe filha de Animal)
//Construção dos atributos da classe Passaro
public class Passaro extends Animal{
    private String corPena; 
    private String graosConsumidos;
    
  //Aqui vou iniciar o construtor da classe Passaro e chamar o construtor da superclasse(Animal)
	public Passaro(String nome, String raca, String porte, int idade, String corPena, String graosConsumidos ) {
		super(nome, raca, porte, idade);
		this.corPena = corPena;
		this.graosConsumidos = graosConsumidos;
	}

	//Aqui irei inserir os métodos get e set para acessar e modificar atributos
	public String getCorPena() {
		return corPena;
	}
	
	public void setCorPena(String corPena) {
		this.corPena = corPena;
	}
	
	public String getGraosConsumidos() {
		return graosConsumidos;
	}
	
	public void setGraosConsumidos(String graosConsumidos) {
		this.graosConsumidos = graosConsumidos;
	}

	// Implementação do método abstrato da classe Animal
	//Aqui irei utilizar o método para calcular o valor do serviço para Passaro
	@Override
	public double calcularServico(String tipoServico) {
		 switch (tipoServico.toLowerCase()) {
         case "banho": return 20.0;
         case "tosa": return 0.0;
         case "consulta": return 500.0;
         default: return 0;
     }
 }

	@Override
	public String toString() {
		// Retorna uma string com os dados do Passaro
		return super.toString()+
				"Cor Pena: " + corPena +
				"Graos Consumidos:" + graosConsumidos; 
				
	}
	
	}
	

