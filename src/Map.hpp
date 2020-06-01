#ifndef MAP_HPP
#define MAP_HPP
#include "Matrix.hpp"
#include "Point.hpp"

/*
*   This is wrapper class for Matrix
*   It needs for more handy work with coordinates
*/

class Map : public Matrix
{

public:
    Map();
    void setValue(bool value, uint8_t x, uint8_t y) override;

    void moveUpPoint();
    void moveDownPoint();
    void moveLeftPoint();
    void moveRightPoint();

private:
    Point point;
};
#endif /* MAP_HPP */