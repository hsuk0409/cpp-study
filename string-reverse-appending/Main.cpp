#include <iostream>
#include "StringReverseAppending.h"
#include "Vector.h"

using namespace std;
using namespace samples;
using namespace vector;

int main()
{
	//AppendingReversedString();
	Vector v1(3, 5);
	Vector v2(1, 3);
	Vector result = v1 + v2;
	cout << result.GetX() << "," << result.GetY() << endl;

	return 0;
}