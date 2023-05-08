#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
#include <string>

class Instructor : public Person {
  private: 
    int ID;
  
  public:
    Instructor();
    Instructor(std::string name, int ID);
}; 

#endif