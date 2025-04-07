package petshopvirtual;

//Aqui será criada a Classe Tartaruga (classe filha de Animal)
//Construção dos atributos da classe Tartaruga
public class Tartaruga extends Animal{
	private String tipoCarapaca;
	private String ambiente;
	private double velocidadeMedia;

	//Aqui vou iniciar o construtor da classe Tartaruga e chamar o construtor da superclasse(Animal)
	public Tartaruga(String nome, String raca, String porte, int idade, String tipoCarapaca, String ambiente, double velocidadeMedia) {
		super(nome, raca, porte, idade);
		this.tipoCarapaca = tipoCarapaca;
		this.ambiente = ambiente;
		this.velocidadeMedia = velocidadeMedia;
	}
	//Aqui irei inserir os métodos get e set para acessar e modificar atributos

	public String getTipoCarapaca() {
		return tipoCarapaca;
	}
	public void setTipoCarapaca(String tipoCarapaca) {
		this.tipoCarapaca = tipoCarapaca;
	}
	
	public String getAmbiente() {
		return ambiente;
	}
	
	public void setAmbiente(String ambiente) {
		this.ambiente = ambiente;
	}
	
	public double getVelocidadeMedia() {
		return velocidadeMedia;
	}
	
	public void setVelocidadeMedia(double velocidadeMedia) {
		this.velocidadeMedia = velocidadeMedia;
	}
	// Implementação do método abstrato da classe Animal
		//Aqui irei utilizar o método para calcular o valor do serviço para Tartaruga
	@Override
	public double calcularServico(String tipoServico) {
		switch (tipoServico.toLowerCase()) {
        case "banho": return 30.0;
        case "tosa": return 0.0;
        case "consulta": return 120.0;
        default: return 0;
	}
}

	@Override
	public String toString() {
		// Retorna uma string com os dados da tartaruga
		return super.toString()+
		"Tipo Carapaca: " + tipoCarapaca + 
		"Ambiente:" + ambiente +
		"Velocidade media:" + velocidadeMedia;
		
	}
}
