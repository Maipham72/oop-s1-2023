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
    void setID(int ID);
    int getID() const;
}; 

#endif