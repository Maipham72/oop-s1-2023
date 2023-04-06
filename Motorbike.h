#include "Vehicle.h"
#include <iostream>
#ifndef MOTORBIKE_H
#define MOTORBIKE_H

class Motorbike : public Vehicle {
  private:
    int parkingDuration;

  public:
    Motorbike(int ID);
    int getParkingDuration() const;
    void setParkingDuration(int parkingDuration);
};

#endif