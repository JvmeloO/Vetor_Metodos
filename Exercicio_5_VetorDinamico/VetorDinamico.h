#pragma once
#include <iostream>
class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();
	int* vetorAdd;
	int cont = 0;
	int currentSize = 10;
	void add(int element);
	void add(int index, int element);
	void clear();
	bool contains(int element);
	int get(int index);
	int indexOf(int element);
	bool IsEmpty();
	void Remove(int index);
	int Size();
	void printar();
};


inline VetorDinamico::VetorDinamico()
{
	vetorAdd = new int[10];
}

inline VetorDinamico::~VetorDinamico()
{
}

void VetorDinamico::add(int element)
{
	if (cont > currentSize)
	{
		int* vetorTemp = new int[cont];
		for (size_t i = 0; i < cont; i++)
		{
			vetorTemp[i] = vetorAdd[i];
		}
		currentSize++;
		vetorAdd = new int[currentSize];
		vetorAdd = vetorTemp;
	}
	vetorAdd[cont] = element;
	cont++;
}


void VetorDinamico::add(int index, int element)
{
	vetorAdd[index] = element;
}

void VetorDinamico::clear()
{
	delete[] vetorAdd;
	vetorAdd = new int[cont];
	cont = 0;
}

bool VetorDinamico::contains(int element)
{
	for (int i = 0; i < cont; i++)
	{
		if (element == vetorAdd[i])
		{
			return true;
		}
	}
	return false;
}

int VetorDinamico::get(int index)
{
	for (int i = 0; i < cont; i++)
	{
		if (index == i)
		{
			return vetorAdd[i];
		}
	}
	return -1;
}

int VetorDinamico::indexOf(int element)
{
	for (int i = 0; i < cont; i++)
	{
		if (vetorAdd[i] == element)
		{
			return i;
		}
	}
	return -1;
}

bool VetorDinamico::IsEmpty()
{
	if (cont == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void VetorDinamico::Remove(int index)
{
	int* vetorRemove = new int[cont];
	int indexV = 0;
	for (int i = 0; i < cont; i++)
	{
		if (i != index)
		{
			vetorRemove[indexV] = vetorAdd[i];
			indexV++;
		}
	}
	vetorAdd = new int[cont];
	vetorAdd = vetorRemove;
	cont--;
}

int VetorDinamico::Size()
{
	return cont;
}

void VetorDinamico::printar()
{
	for (int i = 0; i < cont; i++)
	{
		std::cout << vetorAdd[i] << "\n";
	}
}
