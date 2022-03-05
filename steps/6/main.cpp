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

// 1. Which one of these do you think is easier to implement and use, dynamic or static polymorphism?
//
//    - Static polymorphism is much simpler to understand, follow, and implement.
//
//
// 2. Modern C++ development highly encourages static polymorphism over dynamic polymorphism, why do you think that is?
//
//    - Dynamic polymorphism using virtual functions occurs at run time.
//    - Static polymorphism using templates occurs at compile time.
//    - It's more efficient to avoid virtual function calls.
//    - It's help programmers to ensure that their class is not used as a base class.
//    - For many cases, it's much simpler to implement.
//    - It allows us to do duck typing.
