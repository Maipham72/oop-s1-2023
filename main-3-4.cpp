#include <iostream>

extern void print_pass_fail(char);
int main() {
  char grade;
  std::cout << "Enter a grade: ";
  std::cin >> grade;
  print_pass_fail(grade);
}