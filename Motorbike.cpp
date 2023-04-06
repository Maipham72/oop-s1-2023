#include "Motorbike.h"
#include "Vehicle.h"


Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration() const {
  std::time_t currentTime = std::time(nullptr);
  int parkingDuration = currentTime - Vehicle::getTime();
  return parkingDuration*0.85;
}

void Motorbike::setParkingDuration(int parkingDuration) {
  this->parkingDuration = parkingDuration;
}
