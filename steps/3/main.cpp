#include "shapes.h"

int main()
{
	Rectangle r1 {3.0, 5.0};
	Square s1 {4.0};
	Circle c1 {10.0};

	printArea(r1);
	printArea(s1);
	printArea(c1);
};
