#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
  private:
    int powerRating;
    bool isOn;
  public:
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
    void set_powerRating(int powerRating);
    int get_powerRating() const;
    void set_isOn(bool isOn);
    bool get_isOn();
};

#endif
