#include <string>
#include "University.h"
#include "Course.h"

University::University() {
  name = " ";
  location = " ";
}

University::University(std::string name, std::string location): name(name), location(location) {}

void University::addCourse(int ID, std::string name) {
  courses = new Course;
}

void University::setName(std::string name) {
  this->name = name;
}

std::string University::getName() {
  return name;
}

void University::setLocation(std::string location) {
  this->location = location;
}

std::string University::getLocation() {
  return location;
}