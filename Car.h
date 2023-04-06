#include "Vehicle.h"
#include <iostream>
#ifndef CAR_H
#define CAR_H

class Car : public Vehicle {
  private:
    int parkingDuration;

  public:
    Car(int ID);
    int getParkingDuration() const;
    void setParkingDuration(int parkingDuration);
};

#endif