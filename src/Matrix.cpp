#include <iostream>
#include "Matrix.hpp"

Matrix::Matrix()
{
    rows = MAX_ROWS;
    columns = MAX_COLUMNS;
    array = new bool *[rows];
    for (uint8_t i = 0; i < rows; i++)
        array[i] = new bool[columns];
}

Matrix::~Matrix()
{
    for (uint8_t i = 0; i < rows; i++)
        delete[] array[i];
    delete[] array;
}

void Matrix::setValue(bool value, uint8_t row, uint8_t column)
{
    if (row < rows && column < columns)
    {
        array[row][column] = 1; //  by setting positive value I mean, that this entry taked by one Point
    }
}

void Matrix::fill()
{
    for (uint8_t i = 0; i < rows; i++)
        for (uint8_t j = 0; j < columns; j++)
            array[i][j] = 0; //  by setting negative value I mean, that this entry is free from any Points
}

void Matrix::draw()
{
    for (uint8_t i = 0; i < rows; i++)
    {
        for (uint8_t j = 0; j < columns; j++)
        {
            std::cout << array[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

void Matrix::reset()
{
    fill();
}