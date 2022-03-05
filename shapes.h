#include <iostream>

class Shape {
public:
	virtual double area() const = 0;
};

class Rectangle : public Shape {
public:
	Rectangle(double width, double height);
	double area() const override;
private:
	double width;
	double height;
};

class Square : public Shape {
public:
	Square(double side);
	double area() const override;
private:
	double side;
};

class Circle : public Shape {
public:
	Circle(double radius);
	double area() const override;
private:
	double radius;
};

void printArea(const Shape& shape);
