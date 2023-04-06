#include "Car.h"
#include "Vehicle.h"


Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration() const {
  std::time_t currentTime = std::time(nullptr);
  int parkingDuration = currentTime - Vehicle::getTime();
  return parkingDuration*0.9;
}

void Car::setParkingDuration(int parkingDuration) {
  this->parkingDuration = parkingDuration;
}
