#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player { 
  private:
    int jersey_number;
    std::string name;
  
  public:
    Player();
    Player(int jersey_number, std::string name); // Error in parameter declaration
    std::string get_name();
    int get_jersey_number();
};

#endif