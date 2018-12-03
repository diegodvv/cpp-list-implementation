/*
 * Lista.h
 *
 *  Created on: Dec 2, 2018
 *      Author: User-PC
 */

#ifndef LISTA_H_
#define LISTA_H_

#include <string>

class Lista {
public:
	Lista();
	virtual ~Lista();

	int getAtIndex(unsigned int);
	void insertAtEnd(int);
	void insertAtBegging(int);
	int insertAtIndex(unsigned int, int);
	int getLength();
	std::string toString();

private:
	class No {
	public:
		No(int);
		No(int, No*);
		virtual ~No();

		No* prox;
		int info;

	};
	int length;
	No* inicio;
};

#endif /* LISTA_H_ */
