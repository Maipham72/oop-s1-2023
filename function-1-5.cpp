#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]) {
  int sum_array[3][3];
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      sum_array[row][col] = array1[row][col] + array2[row][col];
      std::cout << sum_array[row][col] << " ";
    }
    std::cout << std::endl;
  } 
}