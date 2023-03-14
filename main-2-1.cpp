#include <iostream>
using namespace std;

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
int main() {
  float a;
  float b;

  cout << "Enter a number: "; 
  cin >> a;
  cout << "Enter another number: ";
  cin >> b;

  add_op(a,b);
  subtract_op(a,b);

  return 0;
}