#pragma once
#include "iostream"
using namespace std;
/**
* @breaf класс точка
*/
class Point
{
private:
	/**
	* @breaf абсцисса
	*/
	int x;
	/**
	* @breaf ордината
	*/
	int y;
public:
	/**
	* @breaf конструктор
	* @param a - абсцисса (по умолчанию 0)
	* @param b - ордината (по умолчанию 0)
	*/
	Point(const int a = 0, const int b = 0) : x(a), y(b) {}
	/**
	* @breaf конструктор 
	* @param a - абсцисса (по умолчанию 0)
	* @param b - ордината (по умолчанию 0)
	*/
	Point(pair<const int, const int> p) : x(p.first), y(p.second) {}
	/**
	* @breaf оператор вывода
	* @param os - поток вывода
	* @param p - точка
	* @return поток вывода
	*/
	friend ostream& operator<<(ostream& os, const Point& p);
	/**
	* @breaf оператор ввода
	* @param os - поток ввода
	* @param p - точка
	* @return поток ввода
	*/
	friend istream& operator>>(istream& is, const Point& p);
	/**
	* @breaf сравнивает две точки
	* @param p - точка
	*  * return true если точки равны
	*/
	bool operator==(const Point& p) const;
	/**
	* @breaf сравнивает две точки
	* * @param p - точка
	*  * return true если точки неравны
	*/
	bool operator!=(const Point& p) const;
	/**
	* @breaf считывает абсциссу точки с клавиатуры
	* * @return считанное значение
	*/
	int get_x();
	/**
	* @breaf считывает ординату точки с клавиатуры
	* * @return считанное значение
	*/
	int get_y();
};