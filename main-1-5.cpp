#include <iostream>

extern int count_evens(int);
int main() {
  int array[5];
  std::cout << "The number of even numbers is: " << count_evens(5) << std::endl;
  return 0;
}