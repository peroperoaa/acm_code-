#pragma once
#include <iostream>
#include "point.cpp"
using namespace std;
class Circle
{
public:
    void setCirclePoint(Point &c)
    {
        circlePoint = c;
    }
    Point getCirclePoint()
    {
        return circlePoint;
    }
    void setmR(int r)
    {
        mR = r;
    }
    int getmR(void)
    {
        return mR;
    }

private:
    int mR;
    Point circlePoint;
};