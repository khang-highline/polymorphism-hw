class Shape {
public:
};

class Rectangle : public Shape {
public:
	Rectangle(double width, double height);
private:
	double width;
	double height;
};

class Square : public Shape {
public:
	Square(double side);
private:
	double side;
};

class Circle : public Shape {
public:
	Circle(double radius);
private:
	double radius;
};
