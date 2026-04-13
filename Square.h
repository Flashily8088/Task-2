#pragma once
#include "Point.h"
#include <iostream>
#include <utility>
using namespace std;
class Square
{
private:
	/**
	* @breaf первая вершина квадрата
	*/
	Point A;
	/**
	* @breaf вторая вершина квадарата
	*/
	Point B;
	/**
	* @breaf третья вершина квадарата
	*/
	Point C;
	/**
	* @breaf первая вершина квадарата
	*/
	Point D;
	/**
	* @breaf сторона квадрата
	*/
	double a;
	/**
	* @breaf диагональ квадрата
	*/
	double d;
	/**
	* @breaf определяет можно ли по заданным точкам построить квадрат
	* @return true, если можно построить квадрат
	*/
	bool is_square();
	/**
	* @breaf считьает сторону квадрата
	* @return посчитанное значение
	*/
	double side();
	/**
	* @breaf считьает диагональ квадрата
	* @return посчитанное значение
	*/
	double diagonal();
public:
	/**
	* @breaf конструктор по умолчанию
	*/
	Square() : A(0), B(0), C(0), D(0), a(0.0), d(0.0) {}
	/**
	* @breaf конструктор
	* @param A - вершина квадрата
	* @param B - вершина квадрата
	* @param C - вершина квадрата
	* @param D - вершина квадрата
	*/
	Square(Point E, Point F, Point G, Point H);
	/**
	* @breaf конструктор
	* @param p1 - пара координат вершины квадрата
	* @param p2 - пара координат вершины квадрата
	* @param p3 - пара координат вершины квадрата
	* @param p4 - пара координат вершины квадрата
	*/
	Square(pair<const int, const int> p1, pair<const int, const int> p2, pair<const int, const int> p3, pair<const int, const int> p4);
	/**
	* @breaf считывает сторону квадрата
	*  * @return считанное значение
	*/
	double get_a();
	/**
	* @breaf считывает диагональ квадрата
	*  * @return считанное значение
	*/
	double get_d();
	/**
	* @breaf оператор вывода
	* @param os - поток вывода
	* @param s - квадрат
	* @return поток вывода
	*/
	friend ostream& operator<<(ostream& os, const Square& s);
	/**
	* @breaf оператор ввода
	* @param is - поток ввода
	* @param s - квадрат
	* @return поток ввода
	*/
	friend istream& operator>>(istream& is, Square& s);
	/**
	* @breaf сравнивает два квадрата
	* @param s - квадрат
	*  * return true если квадраты равны
	*/
	bool operator==(const Square& s) const;
	/**
	* @breaf сравнивает два квадрата
	* @param s - квадрат
	*  * return true если квадраты неравны
	*/
	bool operator!=(const Square& s) const;
	/**
	* @breaf преобразовывет в строку
	*  * return строку
	*/
	string ToString();
	/**
	* @breaf Расчёт площади
	* @return рассчитанное значение
	 */
	double S();
	/**
	* @breaf Расчёт периметра
	* @return рассчитанное значение
	 */
	double P();
	/**
	* @breaf Расчёт радиуса описанной около квадрата окружности
	* @return рассчитанное значение
	 */
	double R();
	/**
	* @breaf Расчёт радиуса вписанной в квадрат окружности
	* @return рассчитанное значение
	 */
	double r();
};



