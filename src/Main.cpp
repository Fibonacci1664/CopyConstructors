/*
 * Main.cpp
 *
 *  Created on: 27 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "Animal.h"

using namespace std;

int main()
{
	Animal animal1;

	animal1.setName("Freddie");

	Animal animal2 = animal1;	// When animal1 is assigned to animal2, a new constructor is NOT called
	animal2.setName("Bob");		// as you may expect due to creating a new animal object, instead c++
								// automatically or implicitly creates a 'Copy Constructor' for us by default whos job
								// it is to copy the settings from one object to another.

								/*
								 * As can be seen once run the constructor is only called once printing
								 * the 'Animal Created' text.
								 */

	animal1.speak();
	animal2.speak();			/*
	 	 	 	 	 	 	 	 * Once the explicit copy constructor has been created and called
	 	 	 	 	 	 	 	 * calling speak() on animal2 will no longer work due to not having
	 	 	 	 	 	 	 	 * access or knowledge about the fields/attributes of the animal class.
	 	 	 	 	 	 	 	 *
	 	 	 	 	 	 	 	 * These would need to be defined in the copy constructor.
	 	 	 	 	 	 	 	 */

	Animal animal3(animal1);	// This is another method of calling a copy constructor.
	animal3.speak();

	return 0;
}


