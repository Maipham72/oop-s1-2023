#include <iostream>

int main() {
  int a[2][3] = {{11,12,13}, {21,22,23}};
  for (int i =0; i<2; i++) {
    std::cout << *(a[i]) << std::endl; // pointer to first value of each row
  }
  return 0;
}

// output: 11,21