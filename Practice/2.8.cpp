#include <iostream>

int main() {
  int rows = 2;
  int cols = 2;
  int* *a = new int*[rows];  //only intialize rows, have not initalize cols yet

  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++) {
      std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
  return 0;
}

//segmentation fault