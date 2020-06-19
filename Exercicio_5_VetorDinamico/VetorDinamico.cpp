#include "VetorDinamico.h"
#include <iostream>


int main()
{
	//Ao instanciar vetor como sendo da classe vetorDinamico
	VetorDinamico vetor;

	//M�todo para adicionar elementos na ultima posi��o do vetor
	vetor.add(5);
	vetor.add(8);
	vetor.add(10);
	vetor.add(11);
	vetor.add(50);

	//M�todo para listar todos os elementos do vetor, com quebra de linha
	vetor.printar();
	std::cout << "\n";

	//M�todo que verifica se um vetor possui um elemento, m�todo ir� retornar false ou true
	bool c = vetor.contains(8);
	std::cout << c << "\n\n";

	//M�todo que retorna o elemento do vetor na posi��o informada como parametro, caso indique uma posi��o
	//que n�o existe no vetor, o m�todo ira retornar -1
	int element = vetor.get(1);
	std::cout << element << "\n\n";

	//M�todo que retorna o indice do elemento do vetor informado como parametro
	//Caso o elemento passa como parametro n�o exista no vetor, o m�todo ir� retornar -1
	int index = vetor.indexOf(5);
	std::cout << index << "\n\n";

	//M�todo que retorna true se o vetor estiver vazio e false se tiver elementos no vetor
	bool e = vetor.IsEmpty();
	std::cout << e << "\n\n";

	//M�todo que ir� remover o elemento do vetor na posi��o indicada
	vetor.Remove(0);
	vetor.printar();
	std::cout << "\n";

	//M�todo que ir� retornar a quantidade de elementos no vetor
	int size = vetor.Size();
	std::cout << size;
	return 0;
}
