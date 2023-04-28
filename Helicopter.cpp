#include "AirCraft.h"
#include "Helicopter.h"
#include <string>
#include <math.h>

Helicopter::Helicopter() {
  std::string name = NULL;
}

Helicopter::Helicopter(int weight, std::string name): AirCraft(weight), name(name) {}

void Helicopter::set_name(std::string name) {
  this->name = name;
}

std::string Helicopter::get_name() {
  return name;
}

void Helicopter::fly(int headwind, int minutes) {
  if (headwind >= 40 && get_weight() > 5670) {
    get_fuel() - (0.4)*minutes - 0.01*(get_weight() - 5670)*minutes;
    get_numberOfFlights() + 1;
  } else if (headwind >= 40 && get_weight() < 5670) {
    get_fuel() - (0.4)*minutes;
    get_numberOfFlights() + 1;

  } else if (headwind < 40 && get_weight() > 5670) {
    get_fuel() - (0.2)*minutes - 0.01*(get_weight() - 5670)*minutes;
    get_numberOfFlights() + 1;

  } else if (headwind < 40 && get_weight() < 5670) {
    get_fuel() - (0.2)*minutes;
    get_numberOfFlights() + 1;

  }
  

  if (get_fuel() < 20) {
    get_numberOfFlights();
  }
}