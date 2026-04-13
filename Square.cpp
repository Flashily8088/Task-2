#include"Point.h"
#include "Square.h"
#include <cmath>
#include <algorithm>
#include <string>

double distance(Point p1, Point p2) {
	return sqrt(pow(p2.get_x() - p1.get_x(), 2) + pow(p2.get_y() - p1.get_y(), 2));
}
bool Square::is_square() {
	double ab = distance(A, B);
	double bc = distance(B, C);
	double cd = distance(C, D);
	double ad = distance(A, D);
	double ac = distance(A, C);
	double bd = distance(B, D);
	double d[6] = {ab, bc, cd, ad, ac, bd};
	sort(d, d + 6);
	double eps = numeric_limits<double>::epsilon() * pow(10, 7);
	if (d[0] > 0 &&
		abs(d[0] - d[1]) < eps &&
		abs(d[1] - d[2]) < eps &&
		abs(d[2] - d[3]) < eps &&
		abs(d[4] - d[5]) < eps &&
		abs(d[4] - sqrt(2) * d[0]) < eps) {
		return true;
	}
	else return false;
}
double Square::side()
{
	double ab = distance(A, B);
	double bc = distance(B, C);
	double cd = distance(C, D);
	double ad = distance(A, D);
	double ac = distance(A, C);
	double bd = distance(B, D);
	double* d = new double[6] {ab, bc, cd, ad, ac, bd};
	sort(d, d + 6);
	return d[0];
}
double Square::diagonal() {
	double ab = distance(A, B);
	double bc = distance(B, C);
	double cd = distance(C, D);
	double ad = distance(A, D);
	double ac = distance(A, C);
	double bd = distance(B, D);
	double* d = new double[6] {ab, bc, cd, ad, ac, bd};
	sort(d, d + 6);
	return d[5];
}
Square::Square(Point E, Point F, Point G, Point H) : A(E), B(F), C(G), D(H)
{
	if (is_square()) {
		a = side();
		d = diagonal();
	}
	else {
		a = 0;
		d = 0;
	}
}

Square::Square(pair<const int, const int> p1, pair<const int, const int> p2, pair<const int, const int> p3, pair<const int, const int> p4)
{
	Point A(p1), B(p2), C(p3), D(p4);
	if (is_square()) {
		a = side();
		d = diagonal();
	}
	else {
		a = 0;
		d = 0;
	}
}

double Square::get_a()
{
	return this->a;
}

double Square::get_d()
{
	return this->d;
}

bool Square::operator==(const Square& s) const
{
	double eps = numeric_limits<double>::epsilon() * pow(10, 7);
	return (abs(this->a - s.a) < eps && abs(this->d - s.d) < eps);
}

bool Square::operator!=(const Square& s) const 
{
	return !(*this == s);
}

string Square::ToString()
{
	string str = "A side of square a = " + to_string(this->a) + "A diagonal of square d = " + to_string(this->d);
	return str;
}

double Square::S()
{
	return pow(a, 2);
}

double Square::P()
{
	return 4 * a;
}

double Square::R()
{
	return d / 2.0;
}

double Square::r()
{
	return a / 2.0;
}

ostream& operator<<(ostream& os, const Square& s)
{
	cout << "A side of square a = " << s.a << endl;
	cout << "A diagonal of square d = " << s.d << endl;
	return os;
}

istream& operator>>(istream& is, Square& s)
{
	cin >> s.a >> s.d;
	return is;
}
