#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>

ParkingLot::ParkingLot(int max_size): max_size(max_size) {}

int ParkingLot::getCount() const {
  return counter;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (counter < max_size) {
    vehicles.push_back(vehicle);
    counter++;
  } else {
    std::cout << "The lot is full" << std::endl;
  }
}

void ParkingLot::unpackVehicle(int IDinput ) {
  for (int i = 0; i < vehicles.size(); i++) {
    if (vehicles[i]->getID() == IDinput) {
      delete vehicles[i];
      counter--;
    } else {
      std::cout << "Vehicle not in the lot" << std::endl;
    }
  }
}

