#include "AirCraft.h"
#ifndef AIRPLANE_H
#define AIRPLANE_H

class Airplane : public AirCraft {
  private:
    int passengers;
    int numPassengers;

  public:
    Airplane();
    Airplane(int weight, int passengers);
    void reducePassengers(int x);
    int get_numPassengers();
    void fly(int headwind, int minutes);
    void set_passengers(int passengers);
    int get_passengers() const;

};
#endif