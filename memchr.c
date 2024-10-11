#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *s_aux;
	unsigned char c_aux;

	i = 0;
	s_aux = (const unsigned char*)s;
	c_aux = (unsigned char)c;
	if (s_aux && n > 0)
	{
		while (i < n)
		{
			if (s_aux[i] == c_aux)
			{
				return (void*) (s_aux + i);
			}
			i++;
		}
	}
	return (NULL);
}
