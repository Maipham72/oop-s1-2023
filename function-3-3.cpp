#include <iostream>
#include <algorithm>
#include <cmath>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  double average_weight = 0;

  for (int i = 0; i < n; i++) {
    double counter = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]){
        counter++;
      }
    }
  average_weight += double(array[i]*counter/n);
  }

  return average_weight;
}