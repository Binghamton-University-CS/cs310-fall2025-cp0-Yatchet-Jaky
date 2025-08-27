#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalInZoo.h"

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Giant Shark", 1999);
   AnimalInZoo zoo(animal3);
   AnimalInZoo zoo2;

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   zoo.display();
   zoo2.display();

   delete animal1;
}
