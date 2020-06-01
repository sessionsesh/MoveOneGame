#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

/*
*   This file defines a single point, which will be displayed on console
*   This point will be a character, e.g. 'X'
*/

class Point
{
private:
    uint8_t x;
    uint8_t y;

public:
    Point();
    Point(uint8_t x, uint8_t y);

    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();

    uint8_t getX();
    uint8_t getY();


    //  These functions checking position of the point
    //  If last one staying on the edge of the Map, then thery return false
    //  /*Maybe I should throw exception in Matrix class lmfao*/
    // bool checkBoundsX();
    // bool checkBoundsY();

    void getInfo();
};

#endif  /*POINT_HPP*/