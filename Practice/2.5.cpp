#include <iostream>

int main() {
  int a[] = {1,2,3};
  int b[3];
  b = a;

  for (int i = 0; i<3; i++) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}

// answer error, array of b cant be equal to array of a