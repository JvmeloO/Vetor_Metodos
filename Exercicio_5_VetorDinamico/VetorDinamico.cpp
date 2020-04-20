#include "VetorDinamico.h"
#include <iostream>


int main()
{
	VetorDinamico vetor;
	vetor.add(5);
	vetor.add(8);
	vetor.add(10);
	vetor.add(11);
	vetor.add(50);
	vetor.get(4);
	vetor.IsEmpty();
	vetor.indexOf(10);
	vetor.Remover(1);
	vetor.printar();
	vetor.Size();
	return 0;
}
