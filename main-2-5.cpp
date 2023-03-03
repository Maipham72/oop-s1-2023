#include <iostream>

extern bool is_descending(int[],int);
int main() {
  int array[9] = {9,8,7,6,5,3,4,2,1};
  std::cout << is_descending(array,9) << std::endl;
}