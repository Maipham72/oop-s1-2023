#include <iostream>
#include <string>

struct Book {
  std::string title;
  std::string author;
  int year;
  int* book_id = new int;
};

int main() {
  Book b1;
  Book b2;
  *b1.book_id = 100;
  b2 = b1;
  std::cout << *b2.book_id << std::endl; //output is 100
  *b1.book_id = 500;
  std::cout << *b2.book_id << std::endl; //output is 500
  return 0;
}

