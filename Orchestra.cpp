#include <iostream>
#include "Orchestra.h"
#include "Musician.h"
#include <stdlib.h>

Orchestra::Orchestra(): size(0) {}

Orchestra::Orchestra(int size): size(size),performers(new Musician[size]) {}

bool Orchestra::add_musician(Musician new_musician) {
  if (count_mem < size) {
    performers[count_mem] = new_musician;
    count_mem++;
    return true;
    }
  return false;
}

int Orchestra::get_current_number_of_members() {
  return count_mem;
}

bool Orchestra::has_instrument(std::string instrument) {
  for (int i = 0; i < count_mem; i++) {
    if (performers[i].get_instrument() == instrument) {
      return true;
    }
  }
  return false;
}

Musician* Orchestra::get_members(){
  return performers;
};



