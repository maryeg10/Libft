/**/

#include "libft.h"

void  ft_bzero(void *s, size_t n)
{
  size_t  i;
  unsigned char  *s_aux;

  s_aux = (unsigned char *)s;
  i = 0;
  while ( i < n)
  {
    s_aux[i] = '\0';
    i++;
  }
}