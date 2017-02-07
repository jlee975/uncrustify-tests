class Foo
{
public:
	// Lose the new line after '>'
	template< class T >
	operator T*() const
	{
		return 0;
	}

};
