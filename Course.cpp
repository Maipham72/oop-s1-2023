#include "Course.h"
#include <string>

Course::Course() {
  name = " ";
  ID = 0;
}

Course::Course(std::string name, int ID): name(name), ID(ID)   {}

void Course::addPerson(Person* p) {
  p = new Person;
}

void Course::setName(std::string name) {
  this->name = name;
}

std::string Course::getName() {
  return name;
}

void Course::setID(int ID) {
  this->ID = ID;
}

int Course::getID() const {
  return ID;
}

