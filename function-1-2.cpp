#include <iostream>

int is_identity(int array[10][10]) {
  int identity = 1;
  for (int row = 0; row < 10; row++) {
    for (int col = 0; col < 10; col++) {
      if (array[row][col] != 1 && array[col][row] != 0) {
        return 0;
      }
      }
    }
  return identity;
}
