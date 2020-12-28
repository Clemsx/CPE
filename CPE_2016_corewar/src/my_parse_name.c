/*
** my_parse_name.c for asm in /home/Lookiis/CPE_2016_corewar/my
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Wed Dec 14 17:33:14 2016 Lin David
** Last update Sat Dec 17 22:58:23 2016 Lin David
*/

#include "asm.h"
#include <stdlib.h>

char	*my_parse_name(char *str)
{
  int	i;
  int	j;
  char	*newname;

  j = 0;
  i = my_strlen(str);
  while (str[i] != '/' && i != 0)
    {
      i = i - 1;
      j = j + 1;
    }
  str[i] == '/' ? i = i + 1 : 0;
  newname = malloc(sizeof(char) * (j - 1));
  j = 0;
  while (str[i] != '.')
    {
      newname[j] = str[i];
      j = j + 1;
      i = i + 1;
    }
  newname[j] = '\0';
  return (newname);
}
