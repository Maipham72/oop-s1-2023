#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include <string>

int main() {
  ParkingLot parking(10);
  Vehicle* vehicless;
  std::string type;
  while (parking.getCount() < 10) {
    std::cout << "What type of vehicle you want to park?" << std::endl;
    std::cin >> type;

    if (type == "Car") {
      vehicless = new Car(parking.getCount()+1);
    } else if (type == "Bus") {
      vehicless = new Bus(parking.getCount()+1);
    } else if (type == "Motorbike") {
      vehicless = new Motorbike(parking.getCount()+1);
    } else {
      std::cout << "The type is not listed" << std::endl;
    }
    parking.parkVehicle(vehicless);
  }

  std::cout << "Enter the ID number of vehicle you want to remove: " << std::endl;
  int velID;
  std::cin >> velID;

  parking.unpackVehicle(velID);

  return 0;
}
