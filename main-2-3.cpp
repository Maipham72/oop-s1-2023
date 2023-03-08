#include <iostream> 

extern bool is_palindrome(int[],int);
extern int sum_array_elements(int[],int);
extern int sum_if_palindrome(int[],int);

int main() {
  int array[5] = {1,2,0,2,1};
  std::cout << is_palindrome(array,5) << " " << sum_array_elements(array,5) << " " << sum_if_palindrome(array,5) << std::endl;

  int array1[5] = {1,1,1,2,1};
  std::cout << is_palindrome(array1,5) << " " << sum_array_elements(array1,5) << " " << sum_if_palindrome(array1,5) << std::endl;

  int array2[4] = {1,1,1,0};
  std::cout << is_palindrome(array2,4) << " " << sum_array_elements(array2,4) << " " << sum_if_palindrome(array2,4) << std::endl;
}
