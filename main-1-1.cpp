#include <iostream>
#include "Cage.h"


int main() {
  Cage a1;
  std::cout << "Animal 1 has name: " << a1.get_name() << " and ID: " << a1.get_IDnum() << std::endl;

  Cage a2("Pet", 2);
  std::cout << "Animal 2 has name: " << a2.get_name() << " and ID: " << a2.get_IDnum() << std::endl;

  return 0;
}