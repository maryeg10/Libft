/*
The calloc() function allocates memory for an array of  nmemb  elements
of  size bytes each and returns a pointer to the allocated memory.  The
memory is set to zero.  If nmemb or size is 0, then calloc() returns  a
unique pointer value that can later be successfully passed to free().
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}