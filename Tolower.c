char  ft_tolower(char mayus)
{
  int  i;

  i = 0;
  if (mayus >= 'A' && mayus <= 'Z')
  {
    i = mayus + 32;
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
  printf("%c\n", ft_tolower(mayus));
  mayus = 'A';
  printf("%c\n", ft_tolower(mayus));
  mayus = ' ';
  printf("%c\n", ft_tolower(mayus));
  mayus = '4';
  printf("%c\n", ft_tolower(mayus));

  return (0);
}*/