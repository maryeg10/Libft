char  ft_toupper(char mayus)
{
  int  i;

  i = 0;
  if (mayus >= 'a' && mayus <= 'z')
  {
    i = mayus -32;
    return (i);
  }
  return (mayus);
}

/*#include <stdio.h>
char ft_toupper(char mayus);
int  main(void)
{
  char  mayus;
  
  mayus = 'a';
  printf("%c\n", ft_toupper(mayus));
  mayus = 'A';
  printf("%c\n", ft_toupper(mayus));
  mayus = ' ';
  printf("%c\n", ft_toupper(mayus));
  mayus = '4';
  printf("%c\n", ft_toupper(mayus));

  return (0);
}*/