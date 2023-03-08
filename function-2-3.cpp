#include <iostream>

bool is_palindrome(int integers[], int length) {
  bool palindrome = true;
  if (length <= 0) {
    palindrome = false;
  }
  for (int i = 0; i < length; i++) {
    if (integers[i] != integers[length - (i+1)]) {
      palindrome = false;
    }
  }
  return palindrome;
}

int sum_array_elements(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum = sum + integers[i];
  }
  return sum;
}

extern bool is_palindrome(int[],int);
int sum_if_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  bool palindrome = is_palindrome(integers,length);
  int sum = 0;
  if (palindrome == true) {
    sum = sum_array_elements(integers,length);
  } else {
    sum = -2;
  }
  return sum;
}