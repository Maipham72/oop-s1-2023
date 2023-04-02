#ifndef TEAM_H
#define TEAM_H
#include "Player.h"
#include <string>


class Team {
  private:
    int max_size;
    std::string name;
    Player* members;
    int counter = 0;
  
  public:
    Team();
    Team(int max_size, std::string name);
    int get_current_number_of_players();
    std::string get_name();
    Player* get_roster();
    bool add_player(Player new_player);

};

#endif