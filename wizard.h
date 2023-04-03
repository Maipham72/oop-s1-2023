#ifndef WIZARD_H
#define WIZARD_H
#include <string>
#include "player.h"

class Wizard: public Player {
  private:
    int mana;

  public:
    void castSpell(Player* opponent);
    int getHealth();
    int setHealth();
    std::string getName();
    std::string setName();
    int getDamage();
    int setDamage();
};

#endif