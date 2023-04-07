#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <vector>

class ParkingLot {
  private:
    int max_size;
    Vehicle** vehicles;
    int counter = 0;
    int maxParkingDuration;

  
  public:
    ParkingLot(int max_size);
    int getCount() const;
    void parkVehicle(Vehicle* vehicles);
    void unparkVehicle(int IDinput);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif