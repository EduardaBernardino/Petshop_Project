package petshopvirtual;

import java.util.ArrayList;
import java.util.Scanner;

//Aqui irei testar as classes criadas
public class PetShop {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		ArrayList<Animal> animais = new ArrayList<>();
		
		//Instanciando os animais
		Cachorro cachorro1 = new Cachorro("Chico", "Pinsher", "Pequeno", 2, "Duda", "Doméstico", "Ração");
		Passaro passaro1 = new Passaro("Lili", "Pombo", "Pequeno", 2, "Branco", "Alpiste");
		Tartaruga tartaruga1 = new Tartaruga("Tuga", "Tartaruga de orelha vermelha", "Pequena", 10, "Dura", "Aquatico", 0.3);
	
		//Aqui estou inserindo os animais que quero exibir na lista
		animais.add(cachorro1);
		animais.add(passaro1);
		animais.add(tartaruga1);
		
	//Aqui simulei o sistema do Pet Shop que irá mostrar os animais cadastrados
	System.out.println("========PET SHOP MANIA=======");
	System.out.println("=========LISTA ANIMAIS ===========");
		for(Animal a: animais) {
			System.out.println(a.getNome() + " (" + a.getClass().getSimpleName() + ")");
		}
		System.out.println("\n ==========SERVIÇOS DISPONÍVEIS PET SHOP MANIA==========");
		for (Animal a : animais) {
			System.out.println("\n " + a.getNome() + " | " + a.getClass().getSimpleName());
			System.out.println("Idade: " + a.getIdade() + " anos");
			System.out.println("Porte: " + a.getPorte());
			System.out.println("Raça: " + a.getRaca());
			
			//Aqui também será exibida a lista com o preço de cada serviço, de acordo com cada animal
			System.out.println("Banho: R$ " + a.calcularServico("banho"));
			System.out.println("Tosa: R$ " + a.calcularServico("tosa"));
			System.out.println("Consulta: R$ "+ a.calcularServico("consulta"));
			}
			scanner.close();
	
	
	}
}
