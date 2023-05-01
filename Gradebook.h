#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
#include "Grade.h"

class Gradebook {
  private:
    Grade* grades;
  public:
    void addGrade(int student_id, int course_id, std::string assignment, int value);
};

#endif