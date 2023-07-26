#include <iostream>

int main() {
  int rows = 2;
  int cols = 5;
  int* *a = new int*[rows];

  for (int i = 0; i < rows; i++) {
    a[i] = new int[cols]; //initialize cols here
  }

  for (int i = 0;  i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      std::cout << a[i][j] << " "; // default values of 0
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < rows; i++) {
    delete [] a[i];
  }
  delete [] a;

  return 0;
}

// output is two rows of 0
// 0 0 0 0 0 
// 0 0 0 0 0 