namespace foo
{
class Bar
{
};
}

class T
{
public:
	// Styles as "const ::foo::Bar& get() const"
	// (As desired)
	const ::foo::Bar& get() const
	{
		return bar;
	}

	// Styles as "operator int() const"
	// (As desired)
	operator int() const
	{
		return 0;
	}

	// Styles as "operator const::foo::Bar & ( ) const"
	// - No space before global scope operator
	// - & treated like operator instead of reference
	// - Space inserted between parentheses
	operator const ::foo::Bar&() const
	{
		return bar;
	}
private:
	foo::Bar bar;
};
