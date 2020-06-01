#include "Map.hpp"

Map::Map() : Matrix()
{
    point = Point();
    fill();
    setValue(1, 0, 0);
}

void Map::setValue(bool value, uint8_t x, uint8_t y)
{
    const uint8_t OFFSET = MAX_ROWS - 1;
    uint8_t row = y;
    uint8_t column = x;

    Matrix::setValue(value, OFFSET - row, column); // may cause some problems ???
}

void Map::moveUpPoint()
{
    if(point.getY() == MAX_ROWS - 1) return;
    point.moveUp();
    reset();
    setValue(1, point.getX(), point.getY());
}

void Map::moveDownPoint()
{
    if(point.getY() == 0) return;
    point.moveDown();
    reset();
    setValue(1, point.getX(), point.getY());
}

void Map::moveLeftPoint()
{
    if(point.getX() == 0) return;
    point.moveLeft();
    reset();
    setValue(1, point.getX(), point.getY());
}

void Map::moveRightPoint()
{
    if(point.getX() == 31) return;
    point.moveRight();
    reset();
    setValue(1, point.getX(), point.getY());
}