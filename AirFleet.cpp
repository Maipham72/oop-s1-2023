#include "AirFleet.h"
#include "Airplane.h"
#include "Helicopter.h"

AirFleet::AirFleet() {
  Airplane* air = new Airplane(20, 10);
  Helicopter* heli = new Helicopter(10000, "BlackHawk");
  AirCraft* airc = new AirCraft(5000);
  Helicopter* heli1 = new Helicopter(100, "WhiteHawk");
  Airplane* air1 = new Airplane(15, 20);
}

AirCraft** AirFleet::get_fleet() {
    return *fleet;
}