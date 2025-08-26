#include <iostream>
#include <stdlib.h>
using namespace std;

class Animal {
   public:
      Animal(string speciesName, unsigned int discoveryYear) {
         species = speciesName;
         year_discovered = discoveryYear;
      }

      Animal() : species(""), year_discovered(0) {};

      void display() {
         cout << species << " [" << year_discovered << "]" << endl;
      }

   private:
      string species = "";
      unsigned int year_discovered = 0;
};

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();

   delete animal1;
}
