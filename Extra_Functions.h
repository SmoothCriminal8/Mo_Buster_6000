#pragma once
#include <iostream>
#include <windows.h>
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define PURPLE 5
#define DYELLOW 6
#define WHITE 7
#define GRAY 8
#define BBLUE 9
#define BGREEN 10
#define BCYAN 11
#define BRED 12
#define PINK 13
#define YELLOW 14
#define BWHITE 15

using namespace std;


class Extra_Functions
{
public:
    static void CLS(int x = 0, int y = 0)
    {
        static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        std::cout.flush();
        COORD coord = { (SHORT)x, (SHORT)y };
        SetConsoleCursorPosition(hOut, coord);
    }
    static void CC(int DC) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DC);
    }
};



