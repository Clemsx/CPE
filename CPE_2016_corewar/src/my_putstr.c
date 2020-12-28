/*
** my_putstr.c for task03 in /home/Lookiis/CPool_Day04
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Thu Oct  6 10:35:16 2016 Lin David
** Last update Sun Nov 13 16:21:36 2016 Lin David
*/

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (i);
}
