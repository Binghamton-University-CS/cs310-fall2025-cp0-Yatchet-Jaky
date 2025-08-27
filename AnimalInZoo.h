#include <iostream>
#include "Animal.h"

using namespace std;

class AnimalInZoo {
	public:
		AnimalInZoo(Animal AnAnimal) {
			animal = AnAnimal;
			numAnimals = 1;
		}

		AnimalInZoo() : numAnimals(0) {};
		void display();
		Animal getAnimal();
		unsigned int getNumAnimals();

	private:
		Animal animal;
		unsigned int numAnimals = 0;

};
