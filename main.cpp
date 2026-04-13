#include "../Solver/Point.h"
#include "../Solver/Square.h"
#include <iostream>
using namespace std;
/**
* @breaf создаёт 4 точки, по этим точкам создается квадрат,
	расчитываетс радиус вписанной окружности в этот квадрат
	и радиус описанной окружности около данного квадрата
	* @param A - точка
	* @param В - точка
	* @param С - точка
	* @param D - точка
	* @param p0 - пара координат точки
	* @param p2 - пара координат точки
	* @param p3 - пара координат точки
	* @param p4 - пара координат точки
	* @param s - квадрат
*  * return 0
*/
int main() {
	Point A(0, 0), B(1, 0), C(1, 1), D(0, 1);
	Square s(A, B, C, D);
	cout << s << endl;
	pair<int, int> p0(0, 0), p1(1, 0), p2(1, 1), p3(0, 0);
	Square s0(p0, p1, p2, p3);
	cout << s0.ToString() << endl;
	cout << "S = " <<s.S() << endl << "P = " << s.P() << endl <<
		"r = " << s.r() << endl << "R = " << s.R() << endl;
	return 0;
}