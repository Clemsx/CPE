/*
** asm.c for asm.c in /home/aeki/CPE_2016_corewar
**
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
**
** Started on  Wed Dec 14 16:43:35 2016 jimmy mathurin
** Last update Sun Dec 18 15:41:39 2016 clement xia
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "asm.h"
#include "op.h"

char	*get_next_line(const int fd);

char	*create_cor(char *str)
{
  char	*name;
  int	i;
  char	*cor;

  cor = ".cor";
  i = 0;
  name = malloc(sizeof(char) * my_strlen(str) + 3);
  while (str[i] != '.')
    i++;
  my_strncat(name, str, i);
  my_strncat(name, cor, 4);
  open(name, O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);
  return (name);
}

int	is_instruction(char *line)
{
  int	j;

  j = 0;
  while (op_tab[j].mnemonique != NULL)
    {
      if (my_strcmp(get_first_word(line), op_tab[j].mnemonique) == 0)
	return (op_tab[j].code);
      j++;
    }
  return (0);
}

char	*get_hexa(int nb)
{
  char	*hex;

  hex = malloc(sizeof(char) * 5);
  if (nb <= 15)
    {
      init_tab(hex, 3);
      my_strcpy(hex, "0x0");
    }
  else
    {
      init_tab(hex, 2);
      my_strcpy(hex, "0x");
    }
  my_strcat(hex, conv_hexa(nb));
  return (hex);
}

int     assembler(const int fd, char *file)
{
  char  *str;
  int   fdcor;

  fdcor = open(create_cor(file), O_RDWR);
  while ((str = get_next_line(fd)))
    {
      if (is_instruction(str) > 0)
	{
	   write(fdcor, get_hexa(is_instruction(str)), 4);
	   write(fdcor, " ", 1);
	   write(fdcor, get_hexa(convert_bin_to_dec(get_coding_byte(str))), 4);
	   write(fdcor, "\n" , 1);
	}
      free(str);
    }
  return (0);
}

int	main(int argc, char **argv)
{
  int	fd;

  if (argc > 1)
    {
      fd = open(argv[1], O_RDWR);
      assembler(fd, argv[1]);
    }
  return (0);
}
