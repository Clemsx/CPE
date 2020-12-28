/*
** function.c for function.c in /home/aeki/CPE_2016_corewar
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Thu Dec 15 19:16:58 2016 jimmy mathurin
** Last update Sun Dec 18 15:46:30 2016 clement xia
*/

#include <stdlib.h>
#include <stdio.h>
#include "asm.h"

char	*init_tab(char *tab, int len)
{
  int	i;

  i = 0;
  while (i < len)
    {
      tab[i] = '0';
      i++;
    }
  tab[i] = '\0';
  return (tab);
}

char	equiv_hex(int nb)
{
  char	*str;

  str = "0123456789abcdef";
  return (str[nb]);
}

char	*conv_hexa(int nb)
{
  int	nb2;
  char	*str;
  int	len;
  int	i;

  i = 0;
  nb2 = nb;
  len = my_putnbr_base_len(nb, "0123456789ABCDEF");
  str = malloc(sizeof(char) * (len + 1));
  init_tab(str, len);
  nb2 = nb;
  while(str[i] >= 'a' && str[i] <= 'z')
    i++;
  while (nb2 >= 16)
    {
      str[i] = equiv_hex(nb2 % 16);
      nb2 = nb2 / 16;
      i++;
    }
  if (nb2 > 0 && nb2 < 16)
    str[i] = equiv_hex(nb2);
  my_evil_str(str);
  return (str);
}

char	*get_first_word(char *str)
{
  int	i;
  char *word;
  int	nb_char;
  
  i = 0;
  nb_char = 0;
  while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
    {
      nb_char++;
      i++;
    }
  word = malloc(sizeof(char) * nb_char + 1);
  i = 0;
  while (i < nb_char)
    {
      word[i] = str[i];
      i++;
    }
  word[i] = '\0';
  return (word);
}

char	*get_coding_byte(char *str)
{
  char	**tab;
  int	i;
  char	*bin;
  int	k;

  k = 0;
  i = 1;
  bin = malloc(sizeof(char) * 9);
  tab = my_str_to_wordtab(str);
  init_tab(bin, 8);
  while (tab[i])
    {
      if (tab[i][0] == 'r')
	my_strcpy(&bin[k], "01");
      if (tab[i][0] == '%')
	my_strcpy(&bin[k], "10");
      if (tab[i][0] >= '1' && tab[i][0] <= '9')
	my_strcpy(&bin[k], "11");
      i++;
      k = k + 2;
    }
  return (bin);
}
