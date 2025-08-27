#include <iostream>
#pragma once

using namespace std;

class Animal {
   public:
      Animal(string speciesName, unsigned int discoveryYear) {
         species = speciesName;
         year_discovered = discoveryYear;
      }

      Animal() : species(""), year_discovered(0) {};
      void display();

   private:
      string species = "";
      unsigned int year_discovered = 0;
};

