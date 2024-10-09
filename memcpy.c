#include <stdio.h>

void  *ft_memcpy(void *dst, const void *src, size_t n)
{
  size_t i;
  unsigned char *dst_aux;
  const  unsigned char *src_aux;
  
  i = 0;
  dst_aux = (unsigned char *)dst;
  src_aux = (const  unsigned char *)src;
  while (i < n)
  {
    dst_aux[i] = src_aux[i];
    i++;
  }
  return (dst);
}

/*int  main(void)
{
  unsigned char src[] = "Hello World";
  unsigned char dst[11];
  ft_memcpy(dst, src, 11);
  printf("%s\n", dst);
  return (0);
}*/