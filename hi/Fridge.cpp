#include "Fridge.h"
#include "Appliance.h"
#include <math.h>

Fridge::Fridge() {
  volume = 0;
}

Fridge::Fridge(int powerRating, double volume): Appliance(powerRating), volume(volume) {}

void Fridge::set_volume(double volume) {
  this->volume = volume;
}

double Fridge::get_volume() const {
  return volume;
}

double Fridge::getPowerConsumption() {
  return get_powerRating() * 24 * (volume/100);
}