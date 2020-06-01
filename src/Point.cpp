#include "Point.hpp"
#include "Matrix.hpp"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(uint8_t x, uint8_t y)
{
    this->x = x;
    this->y = y;
}

void Point::moveUp()
{
    ++y;
}

void Point::moveDown()
{
    --y;
}

void Point::moveLeft()
{
    --x;
}

void Point::moveRight()
{
    ++x;
}

uint8_t Point::getX()
{
    return x;
}

uint8_t Point::getY()
{
    return y;
}

void Point::getInfo()
{
    std::cout << unsigned(x) << std::endl
              << unsigned(y) << std::endl;
}

// bool Point::checkBoundsX()
// {
//     if(x == MAX_ROWS - 1 || x == 0)
//         return false;
// }

// bool Point::checkBoundsY()
// {
//     if(y == MAX_ROWS - 1 || y == 0)
//         return false;
// }