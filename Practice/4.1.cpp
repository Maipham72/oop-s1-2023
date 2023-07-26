#include <iostream>

class A {
  int x;
};

int main() {
  A.x = 10;
  std::cout << A.x << std::endl;
  return 0;
}

//output: error
//cant use class to get a member, need an instance