class Foo
{
public:
	Foo(
		int,
		int
	)
	{
	}

}

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

};
