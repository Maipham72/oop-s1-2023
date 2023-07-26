#include <iostream>

void creat_2dArray(int** a, int rows, int cols) { //pass by value, there is no values
  a = new int*[rows];
  for (int i = 0; i < rows; i++) {
    a[i] = new int[cols];
  }
}
// pass the values of the pointers, create and use local variables on stack, however forget to initialize pointer, there is no address

int main() {
  int** p;
  creat_2dArray(p,5,2);
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << p[i][j] << " ";
    } 
    std::cout << std::endl;
  }
  return 0;
}

// can pass a variable by values or by reference