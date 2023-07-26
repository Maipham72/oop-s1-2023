#include <iostream>

int* addOnetoX(int x){
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

// output: 101