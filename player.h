#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
  private:
    std::string name;
    int health;
    int damage;
  
  public:
    Player (std::string name, int health, int damage);
    void attack(Player* opponent);
    void takeDamage (int damage);
};

#endif