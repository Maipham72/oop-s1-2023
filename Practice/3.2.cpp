#include <iostream>
#include <string>

struct Book{
  std::string title;
  std::string author;
  int year;
  int* book_id = new int;
};

int main() {
  Book b1;
  Book b2;
  *b1.book_id = 100;
  b2 = b1; // set b1 = b2
  std::cout << *b2.book_id << std::endl;

  return 0;
}

// output is 100 