#ifndef GRADE_H
#define GRADE_H
#include <string>

class Grade {
  private:
    std::string assignment;
    int value;
    int student_id;
    int course_id;

  public:
    Grade();
    Grade(std::string assignment, int value);
    void setValue(int value);
    int getValue() const;
    void setStudentID(int student_ID);
    int getStudentID() const;
    void setCourseID(int student_ID);
    int getCourseID() const;
    void setAssignment(std::string assignment);
    std::string getAssignment();
    

};

#endif