#include "function_pointers.h"
/**
*array_iterator - executesa function given as parameter
*@array: pointer to an integer
*@action: function pointer
*@size: size of array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
		return;
	while (i < size)
	{
		action(*array);
		i++;
	}
}
