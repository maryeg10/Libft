#include <stdio.h>
#include <unistd.h>

void  *ft_memmove(void *dst, const void *src, size_t n)
{
  size_t i;
  unsigned char *dst_aux;
  const  unsigned char *src_aux;

  i = 0;
  dst_aux = (unsigned char *)dst;
  src_aux = (const  unsigned char *)src;

  if (!dst && !src)
    return (NULL);
  if ((dst_aux < src_aux) || (dst_aux >= src_aux + n))
  {
    while (i < n)
    {
      i++;
    }
    while (n > 0)
      {dst_aux[n] = src_aux[n];
    n--;}
  }
  else
  {
    while (i > 0)
    {
      dst_aux[i - 1] = src_aux[i - 1];
        i--;
    }
  }
  
  printf("patata");
  return (dst);
}


int  main(void)
{
  unsigned char src[] = "Hello World";
  unsigned char *dst;
  size_t n = 8;
  
  ft_memmove(dst, src, n);
  //printf("%s\n", dst);//
  //printf("%s\n", dst);
  return (0);
}