#include <string>
#include "Clinic.h"
#include "Cage.h"
#include <stdlib.h>

Clinic::Clinic(): name(""), max_size(0) {}

Clinic::Clinic(std::string name, int max_size): name(name), max_size(max_size), animal_list (new Cage[max_size]) {}

int Clinic::get_number_of_cages() {
  return animal_count;
}

std::string Clinic::get_name() {
  return name;
}

Cage* Clinic::get_cages() {
  return animal_list;
}

bool Clinic::add_cage(Cage new_cage) {
  if (animal_count < max_size) {
    animal_list[animal_count] = new_cage;
    animal_count++;
    return true;
  }
  return false;
}

// Clinic::~Clinic();

