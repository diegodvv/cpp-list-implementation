/*
 * list.cpp
 *
 *  Created on: Dec 2, 2018
 *      Author: User-PC
 */
#include <iostream>
#include "Lista.h"

int main()
{
	Lista* l = new Lista();

	std::cout << l->toString() << '\n';

	l->insertAtEnd(1);
	l->insertAtEnd(2);
	l->insertAtIndex(1, 50);

	std::cout << l->toString() << '\n';

	delete(l);
}
