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

template< class T, unsigned N >
struct extent
{
	static const unsigned long value = N;
};

// They get aligned here, too
template< class T, unsigned N = 0 >
constexpr unsigned long extent_v = extent< T, N >::value;
