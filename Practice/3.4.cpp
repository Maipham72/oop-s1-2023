#include <iostream>
#include <string>

struct Book {
  std::string title;
  std::string author;
  int year;
  int book_id;
};

int main() {
  Book* b1; //pointer to a book
  b1->title = "Book1";  //fixing by (*b1).title = "Book1"; using dot
  std::cout << b1->title << std::endl;
  return 0;
}

//segmentation fault because there is no pointer or deferencing

