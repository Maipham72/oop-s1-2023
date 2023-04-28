#include "AirCraft.h"
#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <string>

class Helicopter : public AirCraft {
  private:
    std::string name;

  public:
    Helicopter();
    Helicopter(int weight, std::string name);
    void fly(int headwind, int minutes);
    void set_name(std::string name);
    std::string get_name();

};
#endif