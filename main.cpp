#include <iostream>
#include "src/Point.hpp"
#include "src/Map.hpp"
#include <Windows.h>

CHAR getch()
{
    DWORD mode, cc;
    HANDLE h = GetStdHandle(STD_INPUT_HANDLE);

    if (h == NULL)
    {
        return 0; // console not found
    }

    GetConsoleMode(h, &mode);
    SetConsoleMode(h, mode & ~(ENABLE_LINE_INPUT | ENABLE_ECHO_INPUT));
    TCHAR c = 0;
    ReadConsole(h, &c, 1, &cc, NULL);
    SetConsoleMode(h, mode);
    return c;
}

int main()
{
    Map map = Map();
    map.draw();
    while (1)
    {
        char key = getch();
        switch (key)
        {
        case 'w':
            map.moveUpPoint();
            system("cls");
            map.draw();
            break;
        case 'a':
            map.moveLeftPoint();
            system("cls");
            map.draw();
            break;
        case 's':
            map.moveDownPoint();
            system("cls");
            map.draw();
            break;
        case 'd':
            map.moveRightPoint();
            system("cls");
            map.draw();
            break;
        }
    }
    return 0;
}