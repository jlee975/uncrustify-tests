class Foo
{
public:
	Foo(
		int x_,
		int y_
	) : x(x_), y(y_)
	{
	}
};

class Bar
{
public:
	// Splits 3,5 onto newlines
	Bar() : Bar(3, 5)
	{
	}

	Bar(
		int x,
		int y
	) : Foo(x, y)
	{
	}

	Foo foo;
};
