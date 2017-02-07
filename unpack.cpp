#include <vector>

class T
{
public:
	T()
	{
	}

	explicit T(
		int,
		int = 0,
		int = 0
	)
	{
	}

};

// Would like ... to stay with && and with ()
template< class... Args >
std::vector< T > emplace(Args&&... args)
{

	std::vector< T > v(std::forward< Args >(args)...);
	return v;
}
