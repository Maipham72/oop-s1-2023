#include <iostream>
#include "Team.h"
#include "Player.h"
#include <stdlib.h>

Team::Team(): max_size(0), name("NULL") {}

Team::Team(int max_size, std::string name): max_size(max_size), name(name), members(new Player[max_size]) {}

int Team::get_current_number_of_players() {
  return counter; 
}

std::string Team::get_name () {
  return name;
}

Player* Team::get_roster () {
  return members;
}

bool Team::add_player(Player new_player) {
  if (counter < max_size) {
    members[counter] = new_player;
    counter++;
    return true;
  }
  return false;
}





