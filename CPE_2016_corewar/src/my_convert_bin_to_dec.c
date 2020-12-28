/*
** my_convert_bin_to_hex.c for  in /home/Lookiis/PSU_2016_minishell2
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Sat Dec 17 16:42:48 2016 Lin David
** Last update Sun Dec 18 15:49:34 2016 clement xia
*/

#include "asm.h"

int	convert_bin_to_dec(char *str)
{
  int	result;
  int	i;
  int	mult;
  
  mult = 1;
  result = 0;
  i = my_strlen(str) - 1;
  while (i >= 0)
    {
      if (str[i] == '1')
	{
	  result = result + mult;
	}
      mult = mult * 2;
      i = i - 1;
    }
  return (result);
}
