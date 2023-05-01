#include "Course.h"
#include "Grade.h"
#include "Gradebook.h"
#include "Instructor.h"
#include "Person.h"
#include "Student.h"
#include "University.h"
#include <iostream>
#include <string>

int main() {
  University* uni = new University[1000]; 
  uni->addCourse(1102, "Math");

  return 0;
}