#include <iostream>

int count_evens(int number) {
  int counter = 0;
  int array[number];
  if (number < 1) {
    return 0;
  }
  for (int i = 0; i <= number; i++) {
    if (array[i] % 2 == 0){
      counter++;
    }
  }
  return counter;
}