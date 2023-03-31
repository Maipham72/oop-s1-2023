#ifndef CAGE_H
#define CAGE_H
#include <string>

class Cage {
  private:
    int IDnum;
    std::string name;

  public:
    Cage();
    Cage(std::string newName, int newNumber);
    std::string get_name();
    int get_IDnum();
};

#endif
