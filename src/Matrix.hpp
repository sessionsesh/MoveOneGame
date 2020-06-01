#ifndef MATRIX_HPP
#define MATRIX_HPP

#define MAX_ROWS uint8_t(32)
#define MAX_COLUMNS uint8_t(32)
#include <iostream>

/*
*   This matrix will represent a map, on which will be displayed a single point
*/

class Matrix
{
public:
    Matrix();
    ~Matrix();
    void draw();
    void fill();
    virtual void setValue(bool value, uint8_t row, uint8_t column);
    void reset();

private:
    uint8_t rows;
    uint8_t columns;
    bool **array;
};

#endif /*MATRIX_HPP*/
