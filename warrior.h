#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
#include <string>

class Warrior : public Player {
  private:
    std::string weapon;
  
  public:
    void swingWeapon(Player* opponent);
    int getHealth();
    int setHealth();
    std::string getName();
    std::string getName();
    int getDamage();
    int setDamage();
};

#endif