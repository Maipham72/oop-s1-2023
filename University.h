#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Course.h"
#include <string>

class University {
  private:
    std::string name;
    std::string location;
    Course* courses;

  public:
    University();

    University(std::string name, std::string location);

    void addCourse(int ID, std::string name);

    void setName(std::string name);
    std::string getName();

    void setLocation(std::string location);
    std::string getLocation();

};

#endif