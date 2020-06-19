#include "VetorDinamico.h"
#include <iostream>


int main()
{
	//Caso queira um novo vetor, crie outra instância da classe VetorDinamico
	VetorDinamico vetor;

	//Método para adicionar elementos na ultima posição do vetor
	vetor.add(5);
	vetor.add(8);
	vetor.add(10);
	vetor.add(11);
	vetor.add(50);
	vetor.add(11);
	vetor.add(50);
	vetor.add(11);
	vetor.add(50);
	vetor.add(11);
	vetor.add(50);
	vetor.add(11);
	vetor.add(50);
	


	//Método para listar todos os elementos do vetor, com quebra de linha
	vetor.printar();
	std::cout << "\n";

	//Método que verifica se um vetor possui um elemento, método irá retornar false ou true
	bool c = vetor.contains(50);
	std::cout << c << "\n\n";

	//Método que retorna o elemento do vetor na posição informada como parametro, caso indique uma posição
	//que não existe no vetor, o método ira retornar -1
	int element = vetor.get(1);
	std::cout << element << "\n\n";

	//Método que retorna o indice do elemento do vetor informado como parametro
	//Caso o elemento passa como parametro não exista no vetor, o método irá retornar -1
	int index = vetor.indexOf(50);
	std::cout << index << "\n\n";

	//Método que retorna true se o vetor estiver vazio e false se tiver elementos no vetor
	bool e = vetor.IsEmpty();
	std::cout << e << "\n\n";

	//Método que irá remover o elemento do vetor na posição indicada
	vetor.Remove(0);
	vetor.printar();
	std::cout << "\n";

	//Método que irá retornar a quantidade de elementos no vetor
	int size = vetor.Size();
	std::cout << size;
	return 0;
}
