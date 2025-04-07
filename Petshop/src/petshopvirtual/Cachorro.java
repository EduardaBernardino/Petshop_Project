package petshopvirtual;

//Aqui será criada a Classe Cachorro (classe filha de Animal)
//Construção dos atributos da classe Cachorro
public class Cachorro extends Animal {
    private String nomeDono;
    private String categoria; 
    private String alimentacao;


  //Aqui vou iniciar o construtor da classe Cachorro e chamar o construtor da superclasse(Animal)
	public Cachorro(String nome, String raca, String porte, int idade, String nomeDono, String categoria, String alimentacao) {
		super(nome, raca, porte, idade);
		this.nomeDono = nomeDono;
		this.categoria = categoria;
		this.alimentacao = alimentacao;
	}
	
	//Aqui irei inserir os métodos get e set para acessar e modificar atributos
	public String getNomeDono() {
		return nomeDono;
	}
	
	public void setNomeDono(String nomeDono) {
		this.nomeDono = nomeDono;
	}
	
	public String getCategoria() {
		return categoria;
	}
	
	public void setCategoria(String categoria) {
		this.categoria = categoria;
	}
	
	public String getAlimentacao() {
		return alimentacao;
	}
	
	public void setAlimentacao(String alimentacao) {
		this.alimentacao = alimentacao;
	}
	// Implementação do método abstrato da classe Animal
	//Aqui irei utilizar o método para calcular o valor do serviço para Cachorro
	@Override
	public double calcularServico(String tipoServico) {
		  switch (tipoServico.toLowerCase()) {
          case "banho": return 150.0;
          case "tosa": return 25.50;
          case "consulta": return 200.0;
          default: return 0;
      }
  }

	@Override
	public String toString() {
		// Retorna uma string com os dados do cachorro
		return super.toString()+
				"Dono" + nomeDono + 
				"Categoria" + categoria + 
				"Alimentacao" + alimentacao;
	}
}
	
	
	