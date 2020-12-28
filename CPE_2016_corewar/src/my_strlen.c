/*
** my_strlen.c for my_strlen.c in /home/aeki/CPool_Day04
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Thu Oct  6 12:41:06 2016 jimmy mathurin
** Last update Sun Dec 18 15:51:19 2016 clement xia
*/

int	my_strlen(char *str)
{
  int   i;
 
  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
 return (i);
}
