#pragma once
#include <iostream>
class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();
	int* vetorAdd;
	int cont = 0;
	bool permitirDuplicado = false;
	bool add(int element);
	void add(int index, int element);
	void clear();
	bool contains(int element);
	int get(int index);
	int indexOf(int element);
	bool IsEmpty();
	int Remover(int index);
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

bool VetorDinamico::add(int element)
{
	this->vetorAdd[cont] = element;
	this->cont++;
	return 0;
}


void VetorDinamico::add(int index, int element)
{
	this->vetorAdd[index] = element;
}

void VetorDinamico::clear()
{
	delete[] vetorAdd;
	vetorAdd = new int[10];
}

bool VetorDinamico::contains(int element)
{
	for (int i = 0; i < cont; i++)
	{
		if (element == vetorAdd[i])
		{
			std::cout << "true" << "\n";
			return 0;
		}
		else
		{
			std::cout << "false" << "\n";
			return 0;
		}
	}
}

int VetorDinamico::get(int index)
{
	for (int i = 0; i < cont; i++)
	{
		if (index == i)
		{
			std::cout << vetorAdd[i] << "\n";
			return 0;
		}
	}
}

int VetorDinamico::indexOf(int element)
{
	for (int i = 0; i < cont; i++)
	{
		if (vetorAdd[i] == element)
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}

bool VetorDinamico::IsEmpty()
{
	int contEmpty = 0;
	for (int i = 0; i < cont; i++)
	{
		if (vetorAdd[i] != NULL)
		{
			contEmpty++;
		}
	}
	if (contEmpty != 0)
	{
		std::cout << "false" << "\n";
	}
	else
	{
		std::cout << "true" << "\n";
	}
	return 0;
}

int VetorDinamico::Remover(int index)
{
	for (int i = 0; i < cont; i++)
	{
		if (index == i)
		{
			vetorAdd[i] == NULL;
		}
	}
	return 0;
}

int VetorDinamico::Size()
{
	std::cout << cont;
	return 0;
}

void VetorDinamico::printar()
{
	for (int i = 0; i < cont; i++)
	{
		std::cout << vetorAdd[i] << "\n";
	}
}
