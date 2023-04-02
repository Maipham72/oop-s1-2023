#include <iostream>
#include "Player.cpp"

int main() {
  Player p1;
  std::cout << "Default jersey: " << p1.get_jersey_number() << " Default name: " << p1.get_name() << std::endl;

  Player p2(7,"Mai");
  std::cout << "Jersey number: " << p2.get_jersey_number() << " Name: " << p2.get_name() << std::endl;

  return 0; 
}