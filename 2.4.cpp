#include <iostream>

int* addOnetoX(int x) {
  x = x + 1;
  return &x; // return address of x
}

int main() {
  int x = 100;
  int* p = addOnetoX(x);
  std::cout << *p << std::endl;
  return 0;
}

// output: error/ undefined
// there is no pointer return