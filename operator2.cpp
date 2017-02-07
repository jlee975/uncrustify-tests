class Foo
{
public:
	// Lose the new line after '>'
	template< class T >
	operator T*() const
	{
		return 0;
	}

	// But not here
	template< class T >
	T* get() const
	{
		return 0;
	}

};
