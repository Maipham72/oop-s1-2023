#include "Student.h"
#include "Person.h"
#include <string>

Student::Student() {
  ID = 0;
}

Student::Student(std::string name, int ID): Person(name), ID(ID) {}