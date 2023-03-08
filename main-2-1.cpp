#include <iostream>
#include <string>

extern void print_binary_str (std::string);
int main() {
  std::string s;

  std::cout << "Enter a number: ";
  std::cin >> s;

  print_binary_str(s);

  return 0;
}