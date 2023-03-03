#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n) {
  bool fan_array = true;
  if (n < 1) {
    return false;
  }

  bool ascending = true;
  for (int i = 0; i < floor(n/2); i++) {
    if (array[i] >= array[i+1]) {
      ascending = false;
      fan_array = false;
      break;
    } else {
      for (int j = 0; j < n; j++) {
        if (array[j] != array[n-(j+1)]) {
          fan_array = false;
        }
      }
    }
  }
  return fan_array;
}


