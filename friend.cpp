namespace test
{
template< class T >
class future;

template< typename T >
void swap(future< T >& f, future< T >& g);

template< class T >
class future
{
	// Lose the space after void
	friend void ::test::swap< >(future< T >&, future< T >&);
};
}
