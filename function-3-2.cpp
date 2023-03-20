#include <iostream>
using namespace std;

int *readNumbers() {
  int *array = new int[10];
  for (int i = 0; i < 10; i++) {
    std::cin >> array[i];
  }
return array;
}

int *reverseArray(int *numbers1,int length) {
  int *reverse_array = new int[length];
  for (int i = 0; i <  length; i++) {
    reverse_array[i] = numbers1[length-i-1];
  }

  return reverse_array;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
  for (int i = 0; i < length; i++) {
    if (numbers1[i] == numbers2[i]) {
      return true;
    }
  }
  return false;
}
