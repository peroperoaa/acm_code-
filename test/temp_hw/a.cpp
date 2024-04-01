#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point
{
    double x, y;
public:
    Point();
    Point(double x_value, double y_value);
    double getX();
    double getY();
    void setX(double x_value);
    void setY(double y_value);
    double distanceToAnotherPoint(Point P);
};
Point::Point()
{
    x = 0, y = 0;
}
Point::Point(double x_value, double y_value)
{
    x = x_value;
    y = y_value;
}
void Point::setX(double x_value)
{
    x = x_value;
    return ;
}
void Point::setY(double y_value)

{
    y = y_value;
    return ;
}
double Point::getX(void)
{
    return x;
}
double Point::getY(void)
{
    return y;
}
double Point::distanceToAnotherPoint(Point P)
{
    return sqrt((x - P.getX()) * (x - P.getX()) + (y - P.getY()) * (y - P.getY()));
}
void solve(void)
{
    double tempX1, tempY1, tempX2, tempY2;
    cin >> tempX1 >> tempY1 >> tempX2 >> tempY2;
    Point p1(tempX1, tempY1), p2(tempX2, tempY2);
    cout << "Distance of Point("
         << fixed << setprecision(2) << p1.getX() <<","
         << fixed << setprecision(2) << p1.getY() << ") to Point("
         << fixed << setprecision(2) << p2.getX() << ","
         << fixed << setprecision(2) << p2.getY() << ") is "
         << fixed << setprecision(2) << p1.distanceToAnotherPoint(p2) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    cin >> _;
    while(_--)
        solve();
}