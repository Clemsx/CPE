/*
** my_str_to_wordtab.c for task04 in /home/Lookiis/CPool_Day08/task03
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Wed Oct 12 22:37:02 2016 Lin David
** Last update Sat Dec 17 17:32:02 2016 jimmy mathurin
*/

#include <stdlib.h>

char	my_strncpy(char *dest, char *src, int n);
int	my_strlen(char *str);

int	is_alpha(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  if (c >= 'A' && c <= 'Z')
    return (1);
  if (c >= 'a' && c <= 'z')
    return (1);
  if (c == '%' || c == ':')
    return (1);
  return (0);
}

int	nb_arg(char *str)
{
  int	i;
  int	cumul;

  cumul = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (is_alpha(str[i]) == 1 && 0 == is_alpha(str[i + 1]))
	  cumul = cumul + 1;
      i = i + 1;
    }
  return (cumul);
}

char	**my_str_to_wordtab(char *str)
{
  int   i;
  int	j;
  int	k;
  char	**tab;
  
  i = 0;
  j = 0;
  k = 0;
  tab = malloc(sizeof(char *) * (nb_arg(str) + 1));
  while (str[i] != '\0')
    {
      if (is_alpha(str[i]) == 1)
	j = j + 1;
      if (is_alpha(str[i]) == 1 && is_alpha(str[i + 1]) == 0)
	{
	  tab[k] = malloc(sizeof(char) * (j + 1));
	  my_strncpy(tab[k], &str[i - j + 1],j);
	  j = 0;
	  k = k + 1;
	}
      i = i + 1;
    }
  tab[nb_arg(str)] = '\0';
  return (tab);
}
