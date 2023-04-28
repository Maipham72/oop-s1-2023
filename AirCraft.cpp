#include "AirCraft.h"

AirCraft::AirCraft() {
  weight = 0;
  fuel = 0;
  numberOfFlights = 0;
}

AirCraft::AirCraft(int weight): weight(weight) {}

void AirCraft::refuel() {
  fuel = 100/100;
}

void AirCraft::set_weight(int weight) {
  this->weight = weight;
}

int AirCraft::get_weight() const {
  return weight;
}

void AirCraft::set_fuel(float fuel) {
  this->fuel = fuel;
}

float AirCraft::get_fuel() const {
  return fuel;
}

void AirCraft::set_numberOfFlights(int numberOfFlights) {
  this->numberOfFlights = numberOfFlights;
}

int AirCraft::get_numberOfFlights() const {
  return numberOfFlights;
}

void AirCraft::fly(int headwind, int minutes) {
  numberOfFlights++;
}