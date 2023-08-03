#include "main.h"

/*will set bit of a give index
 *returns1(if succeful)-1(for failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

