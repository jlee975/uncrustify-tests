template< bool B >
struct foo
{
};

// Lose space before && in foo< ... > but not in assignment
// of "value"
template< class B1 = void, class B2 = void >
struct conjunction : foo< B1::value && B2::value >
{
	static const bool value = B1::value && B2::value;
};
