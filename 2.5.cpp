#include <iostream>

int main() {
  int a[] = {1,2,3};

  int b[3];

  b = a; // cant set array = array

  for (int i = 0; i < 3; i++) {
    std::cout << a[i] << std::endl;
  }

  return 0;
}

// output: error