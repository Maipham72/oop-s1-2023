#include <iostream>

int* addOnetoX(int x) { //return type is a point
  int res = x + 1;
  int *h = new int;
  *h = res;

  return h;
}

int main() {
  int x = 100;
  int* p = addOnetoX(x);
  std::cout << *p << std::endl;
  return 0;
}

// answer is 101 
 