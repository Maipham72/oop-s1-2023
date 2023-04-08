#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include <string>

int main() {
  ParkingLot parking(10);
  int ID = 1;
  
  while (parking.getCount() < 10) {
    std::string type;
    std::cout << "What is the type of vehicle you want to park?" << std::endl;
    std::cin >> type;
    
    Vehicle* vehicle;

    if (type == "Car") {
      vehicle = new Car(ID);
      ID++;
    } else if (type == "Bus") {
      vehicle = new Bus(ID+1);
      ID++;
    } else if (type == "Motorbike") {
      vehicle = new Motorbike(ID+2);
      ID++;
    } else {
      std::cout << "The type is not listed" << std::endl;
    }
    parking.parkVehicle(vehicle);
  }

  std::cout << "Enter the ID number of vehicle you want to remove: " << std::endl;
  int velID;
  std::cin >> velID;
  
  parking.unparkVehicle(velID);

  return 0;
}
