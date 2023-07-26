#include <iostream>

// pointer stores the memory address as its value
void addOnetoX(int* p) {
  *p = *p + 1; //go the address of that variable, take the value + 1
}

int main() {
  int x = 100;
  addOnetoX(&x); // & paste the memory address
  std::cout << x << std::endl;
  return 0;
}

// answer is 101