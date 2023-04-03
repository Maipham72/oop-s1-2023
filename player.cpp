#include "player.h"
#include <string>
#include <iostream>

Player::Player(std::string name, int health, int damage): name(name), health(health), damage(damage) {}

void Player::attack(Player* opponent) {
  std::cout << "Warrior attack, opponent take the hit" << std::endl;
  opponent->damage = this->damage;
}

void Player::takeDamage(int damage) {
  std::cout << "The player took " << damage << " points" << ", the remain health point is: " << health - damage << std::endl;
}
