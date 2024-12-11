#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
//base class GameObject

class GameObject {
    public:
        int x, y;
        char symbol;
        GameObject(int x = 0, int y = 0, char symbol = ' ') : x(x), y(y), symbol(symbol) {}
        virtual ~GameObject() {}
    };

#endif // GAMEOBJECT_H

