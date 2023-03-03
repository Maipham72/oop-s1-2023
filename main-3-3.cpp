#include <iostream>

extern bool weighted_average(int[],int);
int main() {
  int array[6] = {1,2,1,4,3,1};
  std::cout << weighted_average(array,6) << std::endl;
}