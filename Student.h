#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
  private: 
    int ID;
  
  public:
    Student();
    Student(std::string name, int ID);
};

#endif