#include "main.h"

/* determine whether a machine is little or big in relation to endian
 * 0 big 1 small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

