#include <iostream>
#include <string>

struct Book {
  std::string title;
  std::string author;
  int year;
  int book_id;
};

int main() {
  Book* b1; //create a pointer but havent initialize, didnt allocate memory/space => pointer to no where
  b1->title = "Book1";
  std::cout << b1->title << std::endl; //
  return 0;
}

//seg fault
// using new create an instance of a book