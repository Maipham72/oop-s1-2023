#include "Appliance.h"
#ifndef TV_H
#define TV_H

class TV : public Appliance {
  private:
    double screenSize;

  public:
    TV();
    TV(int powerRating, double screenSize);
    void set_ScreenSize(double screenSize);
    double get_ScreenSize() const;
    double getPowerConsumption();
};

#endif