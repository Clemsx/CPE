/*
** my_strcat.c for my_strcat.c in /home/aeki/CPool_Day07
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Tue Oct 11 09:03:12 2016 jimmy mathurin
** Last update Wed Oct 12 10:06:30 2016 jimmy mathurin
*/

char	*my_strcat(char *dest, char *src)
{
  int	j;
  int	i;

  j = 0;
  i = 0;
  while (dest[j] != '\0')
    {
      j++;
    }
  while (src[i] != '\0')
    {
      dest[i + j] = src[i];
      i++;
    }
  dest[i + j] = '\0';
  return (dest);
}
