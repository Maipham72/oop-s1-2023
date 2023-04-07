#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include <string>

int main() {
  ParkingLot parking(10);
  int ID;
  std::string type;
  
  for (int i = 0; i < 10; i++) {
    std::cout << "What is the type of vehicle you want to park?" << std::endl;
    std::cin >> type;
    
    Vehicle* vehicle[10];

    if (type == "Car") {
      vehicle[i] = new Car(i+1);
    } else if (type == "Bus") {
      vehicle[i] = new Bus(i+1);
    } else if (type == "Motorbike") {
      vehicle[i] = new Motorbike(i+1);
    } else {
      std::cout << "The type is not listed" << std::endl;
    }
    parking.parkVehicle(*vehicle);
  }

  std::cout << "Enter the ID number of vehicle you want to remove: " << std::endl;
  int velID;
  std::cin >> velID;
  
  parking.unparkVehicle(velID);

  return 0;
}
