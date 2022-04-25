#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 *
 * Returns: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *m = *malloc(b);

	if (!m)
		exit(98);

	return (m);
}	
