#ifndef PLAYER_H
#define PLAYER_H

#include "gameobject.h"

class Player : public GameObject {
public:
    Player(int x = 0, int y = 0, char symbol = 'U') : GameObject(x, y, symbol) {}
};

#endif // PLAYER_H
