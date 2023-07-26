#include <iostream>

void addOnetoX(int y) {
  y = y + 1;
}

int main() {
  int x = 100;
  addOnetoX(x);
  std::cout << x << std::endl;
  return 0;
}

// answer is 100 