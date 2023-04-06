#include "Bus.h"
#include "Vehicle.h"


Bus::Bus(int ID) : Vehicle(ID) {}

int Bus::getParkingDuration() const {
  std::time_t currentTime = std::time(nullptr);
  int parkingDuration = currentTime - Vehicle::getTime();
  return parkingDuration*0.75;
}

void Bus::setParkingDuration(int parkingDuration) {
  this->parkingDuration = parkingDuration;
}
