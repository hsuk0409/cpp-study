#include "Vector.h"

namespace vector
{
	Vector::Vector()
		: mX(0)
		, mY(0)
	{
	}

	Vector::Vector(int x, int y)
		: mX(x)
		, mY(y)
	{
	}

	int Vector::GetX() const
	{
		return mX;
	}

	int Vector::GetY() const
	{
		return mY;
	}

	Vector Vector::operator+(const Vector& v) const
	{
		Vector result;
		result.mX = mX + v.mX;
		result.mY = mY + v.mY;

		return result;
	}
}