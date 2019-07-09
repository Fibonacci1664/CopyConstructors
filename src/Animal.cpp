/*
 * Animal.cpp
 *
 *  Created on: 27 Jun 2019
 *      Author: Dave
 */

#include "Animal.h"

Animal::Animal()
{
	cout << "Animal created" << endl;
}

Animal::Animal(const Animal &other)
{
	name = other.name;		// This is allowing access to the field name by the copy constructor.

	cout << "Animal created by copying" << endl;
}

Animal::~Animal()
{
	// TODO Auto-generated destructor stub
}

void Animal::setName(string name)
{
	this->name = name;
}

void Animal::speak() const
{
	cout << "My name is: " << name << endl;
}

