#include <iostream>

float add_op(float left, float right) {
  float sum = 0;
  sum = left + right;
  return sum;
}

float subtract_op(float left, float right) {
  float res = 0;
  res = abs(left - right);
  return res;
}
