#include <iostream>
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include "Vehicle.h"
#include <ctime>

int main() {
  int velNum; 
  std::cout << "Enter the number of vehicle you wan to park: " << std::endl;
  std::cin >> velNum;

  std::string type;
  Vehicle* array[velNum];
  for (int i = 0; i < velNum; i++) {
    std::cout << "What is the type of vehicle " << i + 1 << "?" << std::endl;
    std::cin >> type;
    if (type == "Car") {
      array[i] = new Car(i+1);
    } else if (type == "Bus") {
      array[i] = new Bus(i+1);
    } else if (type == "Motorbike") {
      array[i] = new Motorbike(i+1);
    } else {
      std::cout << "The type is not listed" << std::endl;
    }
  }

  for (int i = 0; i < velNum; i++) {
    std::cout << "Vehicle " << array[i]->getID() << ": " << array[i]->getParkingDuration() << " seconds" << std::endl;

    delete array[i];
  }

  return 0;
}
