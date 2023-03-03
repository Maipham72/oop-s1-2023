#include <iostream>

extern double array_mean(int[], int);
int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "The average is: " << array_mean(array,5) << std::endl;

  int array1[5] = {2,2,1,4,5};
  std::cout << "The average is: " << array_mean(array1,5) << std::endl;
  return 0;


}