#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {
  private:
    int weight;
    float fuel = 100/100;
    int numberOfFlights = 0;

  public:
    AirCraft();
    AirCraft(int weight);
    void refuel();
    virtual void fly(int headwind, int minutes);
    void set_weight(int weight);
    int get_weight() const;
    void set_fuel(float fuel);
    float get_fuel() const;
    void set_numberOfFlights(int numberOfFlights);
    int get_numberOfFlights() const;

}; 

#endif