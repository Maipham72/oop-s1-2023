#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>

class GameEntity {
  protected:
    std::tuple<int, int> position;
    char type;

  public:
    GameEntity(int x, int y, char type) : position(x, y), type(type) {}

    std::tuple<int, int> getPos() {
      return position;
    }

    char getType() {
      return type;
    }

    void setPos(int x, int y) {
      this->position = {x,y};
    }

    virtual ~GameEntity() = default;
};

#endif