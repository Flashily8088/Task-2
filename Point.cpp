#include "Point.h"
#include "iostream"

Point::Point(const int a = 0, const int b = 0) : x(a), y(b) {}
Point::Point(pair<const int, const int> p) : x(p.first), y(p.second) {}
ostream& operator<<(ostream& os, const Point& p)
{
	cout << "(" << p.x << "; " << p.y << ")";
	return os;
}

istream& operator>>(istream& is, const Point& p)
{
	cin >> p.x >> p.y;
	return is;
}

bool Point::operator==(const Point& p) const
{
	double eps = numeric_limits<double>::epsilon() * pow(10, 7);
	return (((*this).x - p.x) < eps && ((*this).y - p.y) < eps);
}

bool Point::operator!=(const Point& p) const
{
	return !(*this == p);
}

int Point::get_x() const
{
	return x;
}

int Point::get_y() const
{
	return y;
}
