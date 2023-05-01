#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
  private:
    std::string name;

  public: 
    Person();
    Person(std::string name);
    void setName(std::string name);
    std::string getName();
};

#endif