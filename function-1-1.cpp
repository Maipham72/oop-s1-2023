#include <iostream>

void print_matrix(int array[10][10]) {
  for (int row = 0; row < 10; row++) {
    for (int col = 0; col < 10; col++) {
      std::cout << array[row][col] << " ";
    }
    std::cout << std::endl;
  }
}