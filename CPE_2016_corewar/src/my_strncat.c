/*
** my_strncat.c for my_strncat.c in /home/aeki/CPool_Day07
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Tue Oct 11 12:26:50 2016 jimmy mathurin
** Last update Wed Oct 12 08:43:58 2016 jimmy mathurin
*/

char    *my_strncat(char *dest, char *src, int n)
{
  int   j;
  int   i;

  j = 0;
  i = 0;
  while (dest[j] != '\0')
    {
      j++;
    }
  while (i < n)
    {
      dest[i + j] = src[i];
      i++;
    }
  dest[i + j] = '\0';
  return (dest);
}
