#include <iostream>

int main() {
  int* a = new int [3];
  int* b;
  b = a; // =new int[3]

  for (int i = 0; i<3; i++) {
    std::cout << b[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}

//answer 0 0 0 
// default if not initialize = 0; array of 3 with 3 zeros