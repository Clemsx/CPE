/*
** my_asm_description.c for asm in /home/Lookiis/CPE_2016_corewar/my
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Tue Dec 13 11:52:17 2016 Lin David
** Last update Sun Dec 18 00:36:43 2016 Lin David
*/

#include "asm.h"

void	my_asm_description()
{
  my_putstr("USAGE\n");
  my_putstr("\t./asm file_name[.s]\n");
  my_putstr("DESCRIPTION\n");
  my_putstr("\tfile_name\tfile in assembly language to be converted into file_name.cor, an\n");
  my_putstr("\t\t\texecutable in the Virtual Machine).\n");
}
