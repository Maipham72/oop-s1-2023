#ifndef COURSE_H
#define COURSE_H
#include "Person.h"
#include <string>

class Course {
  private:
    std::string name;
    int ID;
    Person** persons;
    int counter = 0;
  
  public: 
    Course();
    Course(std::string name, int ID);
    void addPerson(Person* p);
    void setName(std::string name);
    std::string getName();
    void setID(int ID);
    int getID() const;
};

#endif
