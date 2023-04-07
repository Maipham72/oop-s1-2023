#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>

ParkingLot::ParkingLot(int max_size): max_size(max_size) {
  vehicles = new Vehicle*[max_size];
}

int ParkingLot::getCount() const {
  return counter;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (counter < max_size) {
    vehicles[counter] = vehicle;
    counter++;
  } else {
    std::cout << "The lot is full" << std::endl;
  }
}

void ParkingLot::unparkVehicle(int IDinput) {
  bool has_vel = false;
  for (int i = 0; i < counter; i++) {
    if (vehicles[i]->getID() == IDinput) {
      delete vehicles[i];
      vehicles[i] = vehicles[counter - 1];
      counter--;
      has_vel = true;
      break;
    } 
  }
  if (has_vel = false) {
    std::cout << "Vehicle not in the lot" << std::endl;
  }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
  int vel_count_overstay = 0;
  for (int i = 0; i < counter; i++)
    if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
      vel_count_overstay++;
    }
  return vel_count_overstay;
}



