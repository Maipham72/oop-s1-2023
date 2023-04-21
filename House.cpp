#include "Appliance.h"
#include "House.h"

House::House() {
  numAppliances = 0;
  appliances = nullptr; 
}

House::House(int numAppliances): numAppliances(numAppliances) {
  appliances = new Appliance*[numAppliances];
}

bool House::addAppliance(Appliance* appliance) {
  if (counter < numAppliances) {
    appliances[counter] = appliance;
    counter++;
    return true;
  }
  return false;
}

double House::getTotalPowerConsumption() {
  double total = 0;
  for (int i = 0; i < counter; i++) {
    total = total + appliances[i]->getPowerConsumption();
  }
  return total;
}