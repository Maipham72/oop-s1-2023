#include <iostream>

int main() {
  int a[2][3] = {{11,12,13},{21,22,23}};
  for (int i = 0; i < 2; i++) {
    std::cout << *(a[i]) << std::endl; 
  }
  return 0;
}
// a[i] stored the value of the first element in each row, 11 and 21
//*a[i] points to the address