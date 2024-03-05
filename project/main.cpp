#include <bits/stdc++.h>
#include "point.cpp"
#include "circle.cpp"
using namespace std;
class Person
{
public:
    Person()
    {
    cout << "starting" << endl;  
    };
    ~Person()
    {
        cout << "ended" << endl;
    }
    void setName(string s)
    {
        mName = s;
    }
    string getName(void)
    {
        return mName;
    }
    Person(string s)
    {
        cout << "lxh是sb" << endl;
    }
private:
    string mName;
};
void create(void)
{
    Person p("sblxh");
}
void isIn(Circle c, Point p)
{
    int distanceX = c.getCirclePoint().getX() - p.getX();
    int distanceY = c.getCirclePoint().getY() - p.getY();
    int distance = distanceX * distanceX + distanceY * distanceY;
    if(distance < c.getmR() * c.getmR())
        cout << "The point is inside the circle." << endl;
    else if(distance == c.getmR() * c.getmR())
        cout << "The point is on the circle." << endl;
    else
        cout << "The point is outside the circle." << endl;
}
int main(void)
{
    create();
    create();
    Circle c1;
    Point c1Point, p;
    c1Point.setX(10), c1Point.setY(0);
    p.setX(100), p.setY(100);
    c1.setmR(10), c1.setCirclePoint(c1Point);
    isIn(c1, p);
    return 0;
}