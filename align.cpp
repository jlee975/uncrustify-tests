template< bool B, typename T >
struct Foo
{
	static const bool value = B;
	typedef T type;
};

// The equals signs get aligned.
// Doesn't make a lot of sense
template< bool B, typename T = void >
using Foo_t = typename Foo< B, T >::type;
