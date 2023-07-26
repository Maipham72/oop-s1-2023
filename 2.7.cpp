#include <iostream>

int main() {
  int rows = 2;
  int cols = 2;
  int* *a = new int*[rows];

  for (int i =0; i< rows; i++) {
    for (int j =0; j < cols; j++) { // have not initialize cols
      std::cout << a[i][j] << std::endl;
    }
  }
  return 0;
}

// output: error/ segmentation fault