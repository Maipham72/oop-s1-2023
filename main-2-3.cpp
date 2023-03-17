#include <iostream>

extern bool is_array_palindrome(int[], int);
extern int sum_integers(int[], int);
extern int palindrome_sum(int[],int);

int main() {
  int numbers[6] = {1,0,0,0,2,1};
  std::cout << is_array_palindrome(numbers,6) << " " << sum_integers(numbers,6) << " " << palindrome_sum(numbers, 6) << std::endl;
   
}