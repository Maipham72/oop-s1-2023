#include <iostream>
#include <algorithm>
#include <cmath>

int median_array(int array[], int n) {
  std::sort(array,array + n);
  int median;
  if (n % 2 == 0 || n < 1) {
    return 0;
  } else if (n % 2 == 1) {
    median = round(array[n/2]);
  }
  return median;
}