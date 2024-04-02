#include <iostream>
#include <iomanip>
#include <cmath>
#include <new>
using namespace std;

class Point
{
    double x, y;
public:
    Point();
    Point(double x_value, double y_value);
    ~Point();
    double getX();
    double getY();
    void setX(double x_value);
    void setY(double y_value);
    double getDisTo(const Point &P);
};
Point::Point()
{
    x = 0, y = 0;
    cout << "Constructor.\n";
}
Point::~Point()
{
    cout << "Distructor.\n";
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
double Point::getDisTo(const Point &P)
{
    return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}
void solve(void)
{
    int n; cin >> n;
    Point* p = new Point [n];
    for(int i = 0; i < n; i++)
    {
        double tempx, tempy; cin >> tempx >> tempy;
        p[i].setX(tempx), p[i].setY(tempy);
    }
    int pos1 = -1, pos2 = -1;
    double ans = -1e30;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i == j)
                continue;
            else 
                if(p[i].getDisTo(p[j]) > ans)
                {
                    ans = p[i].getDisTo(p[j]);
                    pos1 = min(i, j), pos2 = max(i, j);
                }
                else if(p[i].getDisTo(p[j]) == ans)
                    if(min(i, j) < pos1)
                        pos1 = min(i, j), pos2 = max(i, j);
    cout << "The longeset distance is "
         << fixed << setprecision(2) 
         << ans << ",between p[" << pos1
         << "] and p[" << pos2 << "]." << '\n';
    delete [] p;
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