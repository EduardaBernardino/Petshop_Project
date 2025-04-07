package petshopvirtual;

//A classe animal será referência para as outras classes(Cachorro, Passaro e Tartaruga)
//Construção dos atributos comuns a todos os animais
public abstract class Animal {
	private String nome;
	private String raca;
	private String porte;
	private int idade;
	
	//Aqui vou iniciar os atributos da classe Animal
	public Animal (String nome, String raca, String porte, int idade) {
		this.nome = nome;
		this.raca = raca;
		this.porte = porte;
		this.idade = idade;
	}
	
	//Aqui irei inserir os métodos get e set para acessar e modificcar atributos
	public String getNome() {
		return nome;
	}

    public void setNome(String nome) {
        this.nome = nome;
	}
	public String getRaca() {
		return raca;
	}
	public void setRaca(String raca) {
        this.raca = raca;
	}

    public String getPorte() {
        return porte;
	}
	public void setPorte(String porte) {
		if(porte.equalsIgnoreCase("Pequeno")||
		   porte.equalsIgnoreCase("Médio")||
		   porte.equalsIgnoreCase("Grande")) {
			this.porte = porte;
		}else {
			System.out.println("Digite um porte válido");
		}
				
		
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		if (idade>=0) {
			this.idade = idade;
		}else {
			System.out.println("Idade Inválida! Digite uma idade maior ou igual a 0");
		}
		
	}
	//Aqui vou inserir um método abstrato par calcular o valor de determinado tipo de serviço
	public abstract double calcularServico(String tipoServico);
	@Override
	public String toString() {
		 return "Nome: " + nome + ", Raça: " + raca + ", Porte: " + porte + ", Idade: " + idade;
	}
	
}
