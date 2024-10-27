#include "libft.h"

/*
The  memchr()  function  scans  the  initial n bytes of the memory area
pointed to by s for the first instance of c.  Both c and the  bytes  of
the memory area pointed to by s are interpreted as unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *)s)[counter] == (unsigned char)c)
			return ((unsigned char *)s + counter);
		counter++;
	}
	return (NULL);
}