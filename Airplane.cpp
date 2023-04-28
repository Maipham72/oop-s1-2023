#include "Airplane.h"
#include "AirCraft.h"

Airplane::Airplane() {
  passengers = 0;
}

Airplane::Airplane(int weight, int passengers): AirCraft(weight), passengers(passengers) {}

void Airplane::reducePassengers(int x) {
  get_numPassengers() - x;
  if (numPassengers < 0) {
    numPassengers = 0;
  }
}

int Airplane::get_numPassengers() const {
  return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    double fuelUsage = 0.003;
    if (headwind >= 60) {
        fuelUsage = 0.005;
    }
    fuelUsage += 0.00001 * numPassengers;

    double fuelSpent = fuelUsage * minutes;
    double remainingFuel = get_fuel() - fuelSpent;

    if (remainingFuel >= 0.2) {
        set_fuel(remainingFuel);
        get_numberOfFlights() + 1;
    }
}
