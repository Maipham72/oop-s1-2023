#include "TV.h"
#include "Appliance.h"
#include <cmath>

TV::TV() {
  screenSize = 0;
}

TV::TV(int powerRating, double screenSize): Appliance(powerRating), screenSize(screenSize) {}

void TV::set_ScreenSize(double screenSize) {
  this->screenSize = screenSize;
}

double TV::get_ScreenSize() const {
  return screenSize;
}

double TV::getPowerConsumption() {
  return get_powerRating() * (screenSize/10);
}