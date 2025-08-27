#include <iostream>
#include "AnimalInZoo.h"

using namespace std;

void AnimalInZoo::display() {
	cout << getNumAnimals() << " ";
	if(getNumAnimals() > 0) {
		getAnimal().display();
	}
}

Animal AnimalInZoo::getAnimal() {
	return animal;
}

unsigned int AnimalInZoo::getNumAnimals() {
	return numAnimals;
}
