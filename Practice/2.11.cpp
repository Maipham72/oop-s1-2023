#include <iostream>

void create_2dArray(int** &a, int rows, int cols) { //pass by reference with &, do not create new variables
  for (int i = 0; i < rows; i++) {
    a[i] = new int[cols];
  }
}

int main() {
  int** p;
  create_2dArray(p,5,2);
  for (int i=0; i <5; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << p[i][j] << " ";
    }
    std::cout << "\n";
  }
  return 0;
}

// two columns of zeros
// 0 0 
// 0 0
// 0 0
// 0 0
// 0 0 