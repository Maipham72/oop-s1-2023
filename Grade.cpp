#include "Grade.h"
#include <string>

Grade::Grade() {
  assignment = " ";
  value = 0;
}

Grade::Grade(std::string assignment, int value): assignment(assignment), value(value) {}

void Grade::setValue(int value) {
  this->value = value;
}

int Grade::getValue() const {
  return value;
}

void Grade::setStudentID(int student_ID) {
  this->student_id = student_id;
}

int Grade::getStudentID() const {
  return student_id;
}
void Grade::setCourseID(int course_ID) {
  this->course_id = course_id;
}

int Grade::getCourseID() const {
  return course_id;
}

void Grade::setAssignment(std::string assignment) {
  this->assignment = assignment;
}

std::string Grade::getAssignment() {
  return assignment;
}