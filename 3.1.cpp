#include <iostream>
#include <string>

struct Book {
  std::string title;
  std::string author;
  int year;
  int book_id;
};

int main() {
  Book b1;
  Book b2;
  b1.title = "Book 1";
  b2 = b1;
  std::cout << b2.title << std::endl;
  return 0;
}

// output: Book 1