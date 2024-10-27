#include "libft.h"
/*#include <stdio.h>
#include <unistd.h>*/

void  *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;
  unsigned char *dest_aux;
  const  unsigned char *src_aux;

  i = 0;
  dest_aux = (unsigned char *)dest;
  src_aux = (const  unsigned char *)src;

  if (!dest && !src)
    return (NULL);
  if ((dest_aux < src_aux) || (dest_aux >= src_aux + n))
  {
    while (i < n)
    {
      dest_aux[i] = src_aux[i];
      i++;
    }
  }
  else
  {
    i = n;
    while (i > 0)
    {
      dest_aux[i] = src_aux[i];
        i--;
    }
  }
  return (dest);
}

int  main(void)
{
  unsigned char src[] = "Hello World";
  unsigned char *dest;
  size_t n = 13;
  
  ft_memmove(dest, src, n);
  //printf("%s\n", dest);//
  //printf("%s\n", dest);
  return (0);
}