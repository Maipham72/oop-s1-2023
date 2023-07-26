#include <iostream>
#include <string>

struct Book {
  std::string title;
  std::string author;
  int year;
  int book_id;
};

int main() {
  Book* b1;
  b1->title = "Book 1";
  std::cout << b1->title << std::endl;
  return 0;
}

// output: error/ seg fault
// pointer not initialized