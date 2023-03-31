#include "Cage.h"
#include <string>

Cage::Cage(): name(""), IDnum(0) {}

Cage::Cage(std::string newName, int newNumber) {
  name = newName;
  IDnum = newNumber;
}

std::string Cage::get_name() {
  return name;
}

int Cage::get_IDnum() {
  return IDnum;
}