#include "main.h"
#include <stddef.h>

/**
 * _memcpy: function copy form a source file to destination file
 * @dest: where to copy to or a destination file 
 * @src: where to copy from or a source file
 * @n: number of byte to copy
 * Return - a pointer to destination file 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	unsigned int i;

	if (dest == NULL)
		return NULL;
	
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	
	return (start);
}
