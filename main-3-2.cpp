#include <iostream>

extern bool median_array(int[],int);
int main() {
  int array[9] = {9,8,7,6,5,3,4,2,1};
  std::cout << median_array(array,9) << std::endl;
}

