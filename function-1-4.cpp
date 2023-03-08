#include <iostream>

void print_scaled(int array[3][3],int scale) {
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      array[row][col] = array[row][col] * scale;
      std::cout << array[row][col] << " ";
    }
    std::cout << std::endl;
  }
}