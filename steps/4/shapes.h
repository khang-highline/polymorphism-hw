#include <iostream>

class Rectangle {
public:
	Rectangle(double width, double height);
	double area() const;
private:
	double width;
	double height;
};

class Square {
public:
	Square(double side);
	double area() const;
private:
	double side;
};

class Circle {
public:
	Circle(double radius);
	double area() const;
private:
	double radius;
};

void printArea(const Shape& shape);
