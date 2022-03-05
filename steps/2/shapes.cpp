#include "shapes.h"

Rectangle::Rectangle(double width, double height)
{
	this->height = height;
	this->width = width;
}

Square::Square(double side)
{
	this->side = side;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}
