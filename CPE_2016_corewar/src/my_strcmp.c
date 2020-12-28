/*
** my_strncmp.c for my_strncmp.c in /home/aeki/CPool_Day06/task06
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Mon Oct 10 17:27:16 2016 jimmy mathurin
** Last update Thu Dec 15 17:35:14 2016 jimmy mathurin
*/

int	my_strlen(char *str);

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (my_strlen(s1) > my_strlen(s2))
    return (1);
  else
    if (my_strlen(s2) > my_strlen(s1))
      return (-1);
    else
      {
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	  {
	    i++;
	  }
	return (s1[i] - s2[i]);
      }
}
