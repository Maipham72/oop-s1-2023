#include "wizard.h"
#include "player.h"
#include <string>
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana): Player(name,health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
  int damageDealt = getMana();
  std::cout << "A spell was cast on " << opponent->getName() << " for" << damageDealt << " damage" << std::endl;
  opponent->takeDamage(damageDealt);
}

void Wizard::setMana(int mana) {
  this->mana  = mana;
}

int Wizard::getMana() const {
  return mana;
}
