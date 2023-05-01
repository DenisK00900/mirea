#include <iostream>
#include <Ctime>

using namespace std;

class someclass {
public: 
	int a, b;
	float d, c;

	someclass()
	{
		a = 0;
		b = 0;
		d = 0.0;
		c = 0.0;
	};
	someclass(int af, int bf, float cf, float df)
	{
		a = af;
		b = bf;
		c = cf;
		d = df;
	};
	
	void print()
	{
		cout << a << " " << b << " " << c << " " << d;
	}
};

template <class Type> void Swap(Type& x, Type& y)
{
	Type z;
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a, b;
	a = 9;
	b = 3;
	float c, d;
	c = 1.25;
	d = 0.333;
	someclass e;
	someclass f(2, 4, 5.2, 0.45);

	cout << a << " " << b << "\n";
	cout << c << " " << d << "\n";
	e.print(); cout << "   "; f.print();

	swap(a, b);
	swap(c, d);
	swap(e, f);

	cout << "\n\n";

	cout << a << " " << b << "\n";
	cout << c << " " << d << "\n";
	e.print(); cout << "   "; f.print();

	cout << "\n\n";

	return 0;
}