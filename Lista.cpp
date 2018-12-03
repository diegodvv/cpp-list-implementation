/*
 * Lista.cpp
 *
 *  Created on: Dec 2, 2018
 *      Author: User-PC
 */

#include <string>
#include "Lista.h"

Lista::Lista() {
	// TODO Auto-generated constructor stub
	this->length = 0;
	this->inicio = nullptr;
}

Lista::~Lista() {
	// TODO Auto-generated destructor stub
	No* n = this->inicio;

	while (n != nullptr)
	{
		No* aux = n;
		n = n->prox;
		delete(aux);
	}
}

int Lista::getAtIndex(unsigned int index)
{
	if (int(index) > length-1)
		return -1;

	No* n = this->inicio;

	for (int i = 0; i <= int(index)-1 && n != nullptr; i++)
	{
		n = n->prox;
	}

	return n->info;
}

void Lista::insertAtBegging(int v)
{
	if (this->inicio == nullptr)
		this->inicio = new No(v);
	else
		this->inicio = new No(v, this->inicio);

	this->length++;
}

void Lista::insertAtEnd(int v)
{
	if (this->inicio == nullptr)
	{
		this->insertAtBegging(v);
		return;
	}


	No* n = this->inicio;

		while (n->prox != nullptr)
		{
			n = n->prox;
		}

	n->prox = new No(v);
	this->length++;
}

int Lista::insertAtIndex(unsigned int index, int v)
{
	if (int(index) > length-1+1)
		return -1;

	No* n = this->inicio;

	for (int i = 0; i <= int(index)-2 && n != nullptr; i++)
	{
		n = n->prox;
	}

	n->prox = new No(v, n->prox);

	return 1;
}

Lista::No::No(int value)
{
	this->info = value;
	this->prox = nullptr;
}

Lista::No::No(int value, No* next)
{
	this->info = value;
	this->prox = next;
}

Lista::No::~No()
{

}

std::string Lista::toString()
{
	No* n = this->inicio;

	std::string result = "";

	if (n == nullptr)
		return result;

	while (n->prox != nullptr)
	{
		result += std::to_string(n->info) + "->";
		n = n->prox;
	}

	result += std::to_string(n->info);

	return result;
}
