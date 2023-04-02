#include <iostream>
#include "Clinic.h"
#include "Cage.h"

int main() {
  // create an array of clinic 
  Clinic vets("Mei", 5);

  Cage c1("Dog",1);
  Cage c2("Cat",2);
  Cage c3("Puppy", 3);
  Cage c4("Bird",4);
  Cage c5("Kitten", 5);
  Cage c6("Macpie", 6);

  //add to the array
  if (vets.add_cage(c1)) {
    std::cout << "Added animal 1 to the vet" << std::endl; 
  } else {
    std::cout << "Can not add animal to the vet" << std::endl;
  }

  if (vets.add_cage(c2)) {
    std::cout << "Added animal 2 to the vet" << std::endl; 
  } else {
    std::cout << "Can not add animal to the vet" << std::endl;
  }

  if (vets.add_cage(c3)) {
    std::cout << "Added animal 3 to the vet" << std::endl; 
  } else {
    std::cout << "Can not add animal to the vet" << std::endl;
  }

  if (vets.add_cage(c4)) {
    std::cout << "Added animal 4 to the vet" << std::endl; 
  } else {
    std::cout << "Can not add animal to the vet" << std::endl;
  }

  if (vets.add_cage(c5)) {
    std::cout << "Added animal 5 to the vet" << std::endl; 
  } else {
    std::cout << "Can not add animal to the vet" << std::endl;
  }

  if (vets.add_cage(c6)) {
    std::cout << "Added animal 6 to the vet" << std::endl; 
  } else {
    std::cout << "Can not add animal to the vet" << std::endl;
  }

  // get number of cages and name
  std::cout << "The vet currently has " << vets.get_number_of_cages() << " cages " << "and name: " << vets.get_name() << std::endl;

  //get array of cages in clinic
  Cage* animal_list = vets.get_cages();

  for (int i = 0; i < vets.get_number_of_cages(); i++) {
    std::cout << "Animal " << i + 1 << " has name: " << animal_list[i].get_name() << ", and ID number: " << animal_list[i].get_IDnum() << std::endl;
  }

  return 0;

}