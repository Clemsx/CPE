/*
** my_evil_str.c for my_evil_str.c in /home/aeki/CPool_Day04
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Thu Oct  6 17:12:35 2016 jimmy mathurin
** Last update Mon Oct 24 13:23:18 2016 jimmy mathurin
*/

char	*my_evil_str(char *str)
{
  int   i;
  int	j;
  char	c;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    i++;
  i--;
  while (i >= j)
    {
      c = str[j];
      str[j] = str[i];
      str[i] = c;
      j++;
      i--;
    }
  return (str);
}
  
  
  
