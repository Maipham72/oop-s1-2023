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
  b1.title = "Book 1";
  std::cout << b1.title << std::endl;
  return 0;
}

// output: seg fault
// pointer is not initialized, pointing no where