#include <iostream>

double array_mean(int array[], int n) {
  double sum = 0.0;
  double length = n;
  if (n < 1) {
    sum = 0;
  }
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
  }
  double average = sum/length;
  return average;

}