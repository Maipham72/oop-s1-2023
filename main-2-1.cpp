#include <iostream>

extern void print_binary_str (std::string);
int main() {
  char n;

  std::cout << "Enter a number: ";
  std::cin >> n;

  print_binary_str(n);
  
  return 0;
}