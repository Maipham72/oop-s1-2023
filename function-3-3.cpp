#include <iostream>
#include <algorithm>
#include <cmath>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  double average_weight = 0;
  double length= n;


  for (int i = 0; i < n; i++) {
    double counter = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]){
        counter++;
      }
    }
  average_weight = average_weight+ (array[i]*counter/length);
  }

  return average_weight;
}