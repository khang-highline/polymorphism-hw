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

template <typename T>
void printArea(const T& shape)
{
	std::cout << shape.area() << "\n";
}
