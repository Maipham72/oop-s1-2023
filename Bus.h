#include "Vehicle.h"
#include <iostream>
#ifndef BUS_H
#define BUS_H

class Bus : public Vehicle {
  private:
    int parkingDuration;

  public:
    Bus(int ID);
    int getParkingDuration() const;
    void setParkingDuration(int parkingDuration);
};

#endif