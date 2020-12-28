/*
** my_put_nbr.c for my_put_nbr.c in /home/aeki/CPool_Day03
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Wed Oct  5 17:23:37 2016 jimmy mathurin
** Last update Thu Dec 15 17:33:04 2016 jimmy mathurin
*/

void	my_putchar(char c);

void	my_put_nbr(int nb)
{
  int	longueur;
  int	nb2;
  char	cible;

  cible	= nb;
  longueur = 1;
  if(nb < 0)
    {
      nb = nb * (-1);
      my_putchar(45);
    }
  nb2 = nb;
  while (nb2 >= 10)
    {
      nb2 = nb2 / 10;
      longueur = longueur * 10;
    }
  while (nb >= 10)
    {
      cible = nb / longueur;
      nb = nb % longueur;
      longueur = longueur / 10;
      my_putchar(cible + 48);
    }
  my_putchar(nb + 48);
}

