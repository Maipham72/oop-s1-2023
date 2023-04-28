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
