/*
** my_putchar.c for my_putchar.c in /home/aeki/CPool_Day07/lib/my
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Wed Oct 12 16:15:01 2016 jimmy mathurin
** Last update Thu Dec 15 17:34:37 2016 jimmy mathurin
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
