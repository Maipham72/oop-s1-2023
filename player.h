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
    int getHealth() const;
    void setHealth(int health);
    std::string getName() const;
    void setName(const std::string& name);
    int getDamage() const;
    void setDamage(int damage);
};

#endif