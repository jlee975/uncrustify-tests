#include <iostream>

template< bool B >
struct bool_constant
{
	static const bool value = B;
};

// Lose space before && in foo< ... > but not in assignment
// of "value"
template< class B1 = void, class B2 = void >
struct conjunction : bool_constant<B1::value&&B2::value>
{
};

struct dummy1
{
	static const bool value = true;
};

struct dummy2
{
	static const bool value = false;
};

int main()
{
	std::cout << (dummy1::value&&dummy2::value) << std::endl;
	std::cout << conjunction< dummy1, dummy2 >::value << std::endl;
}
