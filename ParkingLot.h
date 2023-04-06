#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <vector>

class ParkingLot {
  private:
    int max_size;
    std::vector <Vehicle*> vehicles;
    int counter = 0;
    int maxParkingDuration;

  
  public:
    ParkingLot(int max_size);
    int getCount() const;
    void parkVehicle(Vehicle* vehicles);
    void unpackVehicle(int IDinput);
    void countOverstayingVehicles(int maxParkingDuration);
};

#endif