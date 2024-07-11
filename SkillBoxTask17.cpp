#include <iostream>
using namespace std;

class Vector
{
public:
	Vector()
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}

	void Show()
	{
		cout << "\n" << x << " " << y << " " << z;
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
};

int main()
{
	Vector v;
	v.Show();
}