#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	i;

	i = 0;
	duplicate = malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!duplicate)
		return (NULL);
	while (s[i])
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}