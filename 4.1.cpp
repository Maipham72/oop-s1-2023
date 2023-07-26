#include <iostream>

class A {
  int x;
};

int main() {
  // there is no instance of A
  A.x = 10; //wrong syntax
  std::cout << A.x << std::endl;
  return 0;
}

// output: error
// member is inaccesible