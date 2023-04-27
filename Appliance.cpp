#include "Appliance.h"

Appliance::Appliance() {
  powerRating = 0;
  isOn = false;
}

Appliance::Appliance(int powerRating): powerRating(powerRating) {}

void Appliance::turnOn() {
  isOn = true;
}

void Appliance::turnOff() {
  isOn = false;
}

void Appliance::set_isOn(bool isOn) {
  this->isOn = isOn;
}

bool Appliance::get_isOn() {
  return isOn;
}

void Appliance::set_powerRating(int powerRating) {
  this->powerRating = powerRating;
}

int Appliance::get_powerRating() const {
  return powerRating;
}

double Appliance::getPowerConsumption() {
  if (isOn) {
    return powerRating;
  } else {
    return 0;
  }
}

