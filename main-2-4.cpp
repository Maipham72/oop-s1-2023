#include <iostream>

extern int sum_min_max(int[],int);
extern int array_min(int[],int);
extern int array_max(int[],int);

int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << array_min(array,5) << " " << array_max(array,5) << " " << sum_min_max(array,5) << std::endl;

  int array1[5] = {5,1,3,0,5};
  std::cout << array_min(array1,5) << " " << array_max(array1,5) << " " << sum_min_max(array1,5) << std::endl;
}