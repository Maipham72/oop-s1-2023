#include <iostream>
#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int ID): ID(ID) {
  this->timeOfEntry = std::time(nullptr);
}

int Vehicle::getID() const {
  return ID;
}

void Vehicle::setID(int ID) {
  this->ID = ID;
} 

std::time_t Vehicle::getTime() const {
  return this->timeOfEntry;
}

void Vehicle::setTime(const std::time_t& timeOfEntry) {
  this->timeOfEntry = timeOfEntry;
}

