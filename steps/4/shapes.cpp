#include "shapes.h"

Rectangle::Rectangle(double width, double height)
{
	this->width = width;
	this->height = height;
}

double Rectangle::area() const
{
	return width * height;
}

Square::Square(double side)
{
	this->side = side;
}

double Square::area() const
{
	return side * side;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::area() const
{
	return radius * 3.14;
}

void printArea(const Shape& shape)
{
	std::cout << shape.area() << "\n";
}
