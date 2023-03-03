#include <iostream>

extern int sum_two_arrays(int[], int[], int);
int main() {
  int array[5] = {1,2,3,4,5};
  int array2[5] = {2,3,4,5,6};
  std::cout << "The sum of two arrays is: " << sum_two_arrays(array, array2, 5) << std::endl;
  return 0;
}