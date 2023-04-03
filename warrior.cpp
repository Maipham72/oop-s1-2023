#include "warrior.h"
#include "player.h"
#include <string>
#include <iostream>


Warrior::Warrior (std::string name, int health, int damage,std::string weapon): Player(name,health, damage),weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
  int damageDealt = Player::getDamage();
  std::cout << "The weapon has damage " << opponent->getName() << damageDealt << " points" << ", health left: " << Player::getHealth() - damageDealt << std::endl;
}

void Warrior::setWeapon(const std::string& weapon) {
  this->weapon = weapon;
}

std::string Warrior::getWeapon() const {
  return weapon;
}