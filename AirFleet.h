#ifndef AIRFLEET_H 
#define AIRFLEET_H
#include "AirCraft.h"

class AirFleet {
  private:
    AirCraft **fleet[5];
  
  public:
    AirFleet();
    AirCraft** get_fleet();
    
};

#endif