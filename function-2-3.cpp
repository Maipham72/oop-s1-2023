#include <iostream>

bool is_array_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  bool palindrome = true;
  for (int i = 0; i < length; i++) {
    if (integers[i] != integers[length - (i+1)]) {
      palindrome = false;
    }
  }
  return palindrome;
}

int sum_integers(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum = sum + integers[i];
  }
  return sum;
}

extern bool is_array_palindrome(int[], int);
extern int sum_integers(int[], int);
int palindrome_sum(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  bool palindrome = is_array_palindrome(integers, length);
  int sum = 0;
  if (palindrome == false) {
    return sum = -2;
  } else {
    sum = sum_integers(integers,length);
  }
  return sum;
}
