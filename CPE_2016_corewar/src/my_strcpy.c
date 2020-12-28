/*
** my_strcpy.c for corewar in /home/clemsx/C/CPE/CPE_2016_corewar/src
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Sun Dec 18 15:51:01 2016 clement xia
** Last update Sun Dec 18 15:51:03 2016 clement xia
*/

void	my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
}
