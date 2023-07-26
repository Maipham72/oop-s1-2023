#include <iostream>

int main() {
  int rows = 2;
  int cols = 5;
  int* *a = new int*[rows];

  for (int i = 0; i< rows; i++) {
    a[i] = new int[cols]; // for every cols, initialize columns
  }

  for (int i =0; i< rows; i++) {
    for (int j =0; j < cols; j++) { // have not initialize cols
      std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
  }

  for (int i =0; i<rows ; i++) {
    delete [] a[i];
  }

  delete [] a;

  return 0;
}

// output: 0 0 0 0 0 
//         0 0 0 0 0 

