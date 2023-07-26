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
  b1.title = "Book1";
  b2 = b1; // set b2 = b1 meaning every will be the same unless stated 
  std::cout << b2.title << std::endl;
  return 0;
}

// anwswer will be Book1