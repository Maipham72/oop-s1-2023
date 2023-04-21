#include "Appliance.h"
#ifndef HOUSE_H
#define HOUSE_H

class House {
  private: 
    int numAppliances;
    Appliance** appliances;
    int counter = 0;

  public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance* Appliance);
    double getTotalPowerConsumption();
};

#endif