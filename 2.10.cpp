#include <iostream>

void create_2dArray (int** &a, int rows, int cols) {
  a = new int*[rows];
  for (int i = 0; i < rows; i++) {
    a[i] = new int [cols];
  }
}

int main() {
  int** p; //out of scope
  create_2dArray(p,5,2);
  for (int i = 0; i<5; i++) {
    for (int j =0; j<2; j++) {
      std::cout << p[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}

// output: 0 0
//         0 0
//         0 0
//         0 0
//         0 0
