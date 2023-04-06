#include <iostream>
#include <ctime>
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
  private:
    std::time_t timeOfEntry;
    int ID;
  
  public:
    Vehicle(int ID);
    int getID() const;
    void setID(int ID);
    std::time_t getTime() const;
    void setTime (const std::time_t& timeOfEntry);
    virtual int getParkingDuration() const = 0;

};

#endif