#pragma once

namespace vector
{
	class Vector
	{
	public:
		Vector();
		Vector(int x, int y);
		Vector operator+(const Vector& v) const;
		int GetX() const;
		int GetY() const;
	private:
		int mX;
		int mY;
	};
}