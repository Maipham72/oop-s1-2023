#include <iostream> 

bool is_descending(int array[], int n) {
  bool sorted = true;
  if (n <= 0) {
    return false;
  }
  for (int i = 0; i < n-1; i++) {
    if (array[i] <= array[i+1]) {
      sorted = false;
      break;
  }
  }
  return sorted;
}