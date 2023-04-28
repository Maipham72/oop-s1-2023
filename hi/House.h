#include "Appliance.h"
#ifndef HOUSE_H
#define HOUSE_H

class House {
  private:
    int numAppliances;
    int counter = 0;
    Appliance** appliances;

  public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
    void set_numAppliances(int numAppliances);
    int get_numAppliances() const;


};
#endif