#ifndef WASTE_H
#define WASTE_H

#include "gameobject.h"

class Waste : public GameObject {
public:
    Waste(int x = 0, int y = 0, char symbol = ' ') : GameObject(x, y, symbol) {}
};

#endif // WASTE_H
