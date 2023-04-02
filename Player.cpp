#include "Player.h" 

Player::Player() {
  jersey_number = 0;
  name = "NULL";
}

Player::Player(int jersey_number, std::string name): jersey_number(jersey_number), name(name) {} 

// Error in parameter declaration
//   jersey_number = ijersey_number;
//   name = iname;
// }

std::string Player::get_name() {
  return name;
}

int Player::get_jersey_number() {
  return jersey_number;
}