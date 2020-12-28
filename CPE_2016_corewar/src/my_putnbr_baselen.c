/*
** my_putnbr_base.c for my_putnbr_base.c in /home/Lookiis/PSU_2016_my_printf
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Fri Nov 11 18:48:48 2016 Lin David
** Last update Sun Dec 18 15:52:35 2016 clement xia
*/

int	my_strlen(char *str);

int	my_putnbr_base_len(unsigned long nb, char *base)
{
  unsigned long	res;
  int	result;

  result = 1;
  res = nb / my_strlen(base);
  if (res != 0)
    {
      result = result + my_putnbr_base_len(res, base);
    }
  return (result);
}
