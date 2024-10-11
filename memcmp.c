#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	if (s1 && s2 && n > 0)
	{
		const unsigned char *s1_aux;
		const unsigned char *s2_aux;

		s1_aux = (const unsigned char *)s1;
		s2_aux = (const unsigned char *)s2;
		while (s1_aux[i] != s2_aux[i])
		{
			return (s1_aux[i] - s2_aux[i]);
		}
	}
	return (0);
}