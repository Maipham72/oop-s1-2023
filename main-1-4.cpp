#include <iostream>
#include "Team.h"
#include "Player.h"

int main() {
  // create an empty team
  Team team(5,"Wildcat");

  Player p1(1,"Bill");
  Player p2(2,"John");
  Player p3(3,"Smith");
  Player p4(4,"Josh");
  Player p5(5,"Mei");

  // add player
  if (team.add_player(p1)) {
    std::cout << "Added player 1 to the team" << std::endl;
  } else {
    std::cout << "Could not add player 1 to the team" << std::endl;
  }

  if (team.add_player(p2)) {
    std::cout << "Added player 2 to the team" << std::endl;
  } else {
    std::cout << "Could not add player 2 to the team" << std::endl;
  }

  if (team.add_player(p3)) {
    std::cout << "Added player 3 to the team" << std::endl;
  } else {
    std::cout << "Could not add player 3 to the team" << std::endl;
  }

  if (team.add_player(p4)) {
    std::cout << "Added player 4 to the team" << std::endl;
  } else {
    std::cout << "Could not add player 4 to the team" << std::endl;
  }

  if (team.add_player(p5)) {
    std::cout << "Added player 5 to the team" << std::endl;
  } else {
    std::cout << "Could not add player 5 to the team" << std::endl;
  }

  // print number of players
  std::cout << "The team has: " << team.get_current_number_of_players() << " players" << std::endl;

  // get the roster
  Player* members = team.get_roster();

  // print details of each player
  for (int i  = 0; i < team.get_current_number_of_players(); i++) {
    std::cout << "Player " << i + 1 << " has jersey number " << members[i].get_jersey_number() << " and has name " << members[i].get_name() << std::endl;
  } 
  return 0;
}