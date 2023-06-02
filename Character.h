#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"
#include <tuple>

class Character: public Cell {
  public:
    Character(int x, int y): Cell(x,y, 'C') {}

    void move(int dx, int dy) {
      int x;
      int y;
      std::tie(x,y) = getPos();
      setPos(x+dx, y+dy);    
    }
};

#endif