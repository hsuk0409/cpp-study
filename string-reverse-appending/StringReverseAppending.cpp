#include <iostream>
#include <string>
#include "StringReverseAppending.h"

using namespace std;

namespace samples
{
	void AppendingReversedString()
	{
		string line = "Hello World!";

		for (int i = (int)line.size(); i >= 0; --i)
		{
			line += line[i];
		}
		cout << "appended string" << line << endl;
	}
}