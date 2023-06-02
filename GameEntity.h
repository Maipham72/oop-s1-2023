#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H
#include <tuple>

class GameEntity {
  protected:
    std::tuple<int, int> position;
    char type;

  public:
    GameEntity(int x, int y, char type) : position(x,y), type(type) {}

    std::tuple<int, int> getPos() {
      return position;
    }

    void setPos(int x, int y) {
      this->position = {x,y};
    }

    char getType() {
      return type;
    }

    virtual ~GameEntity() = default;

};

#endif