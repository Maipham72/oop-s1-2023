#include "Instructor.h"
#include "Person.h"
#include <string>

Instructor::Instructor() {
  ID = 0;
}

Instructor::Instructor(std::string name, int ID): Person(name), ID(ID) {}
