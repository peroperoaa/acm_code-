#include <iostream>
#include <iomanip>
using namespace std;
class Date
{
    int year, month, day;
    int md[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int rmd[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
public:
    Date();
    Date(int y, int m, int d);
    int getYear();
    int getMonth();
    int getDay();
    void setDate(int y, int m, int d);
    void print();
    void addOneDay();
    bool isR();
};
Date::Date()
{
    year = 1900, month = 1, day = 1;
}
Date::Date(int y, int m, int d)
{
    year = y, month = m, day = d;
}
int Date::getYear()
{
    return year;
}
int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
void Date::setDate(int y, int m, int d)
{
    year = y, month = m, day = d;
    return ;
}
void Date::print()
{
    cout << "Today is " << setfill('0') << setw(2) << year
         << '/' << setfill('0') << setw(2) << month << '/'
         << setfill('0') << setw(2) << day << '\n'; 
    addOneDay();
    cout << "Tomorrow is " << setfill('0') << setw(2) << year 
         << '/' << setfill('0') << setw(2) << month << '/'
         << setfill('0') << setw(2) << day << '\n'; 
    return ; 
}
void Date::addOneDay()
{
    if(isR())
    {
        if(day + 1 <= rmd[month]) day += 1;
        else if(month + 1 <= 12) month += 1, day = 1;
        else year += 1, month = 1, day = 1;
    }
    else 
    {
        if(day + 1 <= md[month]) day += 1;
        else if(month + 1 <= 12) month += 1, day = 1;
        else year += 1, month = 1, day = 1;
    }
    return ;
}
bool Date::isR()
{
    if(year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    else return false;
}

void solve(void)
{
    int t; cin >> t;
    for(int i = 0; i < t; i++)
    {
        if(t % 2)
        {
            int tempy, tempm, tempd;
            cin >> tempy >> tempm >> tempd;
            Date d;
            d.setDate(tempy, tempm, tempd);
            d.print();
        }
        else
        {
            int tempy, tempm, tempd;
            cin >> tempy >> tempm >> tempd;
            Date d(tempy, tempm, tempd);
            d.print();
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    // cin >> _;
    while(_--) solve();
    return 0;
}