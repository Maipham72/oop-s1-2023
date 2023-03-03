#include <iostream>

extern bool is_fanarray(int[],int);
int main() {
  int array[5] = {1,2,1,1,1};
  std::cout << is_fanarray(array,5) << std::endl;

  int array1[5] = {2,1,4,1,2};
  std::cout << is_fanarray(array1,5) << std::endl;

  int array2[3] = {1,1,1};
  std::cout << is_fanarray(array2,3) << std::endl;
}