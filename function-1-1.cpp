#include <iostream>

int sum_diagonal(int array[4][4]) {
  int sum = 0;
  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 4; col++) {
      if (row == col) {
        sum = sum + array[row][col];
      }
    }
  }
  return sum;
}