#pragma once
#include <iostream>
using namespace std;
class Point
{
public:
    void setX(int x)
    {
        mX = x;
    }
    void setY(int y)
    {
        mY = y;
    }
    int getX(void)
    {
        return mX;
    }
    int getY(void)
    {
        return mY;
    }
private:
    int mX;
    int mY;
};