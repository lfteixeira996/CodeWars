#include <stdbool.h>
#include <stddef.h>

bool plural(const size_t value)
{
	if(value >= 2)
	{
		return true;
	}

	return false;
}