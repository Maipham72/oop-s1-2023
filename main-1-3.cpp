#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Car.h"
#include <string>

int main() {
  ParkingLot parking(10);
  int cars_num = 5;
  int bus_num = 3;
  int moto_num = 2;

  for (int i = 0; i < cars_num; i++) {
    Car* car = new Car(i+1);
    parking.parkVehicle(car);
  }
  

  for (int i = 0; i < bus_num; i++) {
    Bus* bus = new Bus(i+1);
    parking.parkVehicle(bus);
  }

  for (int i = 0; i < bus_num; i++) {
    Motorbike* motorbike = new Motorbike(i+1);
    parking.parkVehicle(motorbike);
    }

  int over_stay = parking.countOverstayingVehicles(15);
  std::cout << "Number of overnight stay vehicles is: " << over_stay << std::endl;

  return 0;
}



