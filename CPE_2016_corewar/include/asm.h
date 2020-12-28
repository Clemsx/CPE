/*
** asm.h for asm.h in /home/aeki/CPE_2016_corewar
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Thu Dec 15 17:22:51 2016 jimmy mathurin
** Last update Sun Dec 18 15:48:43 2016 clement xia
*/

#ifndef MY_H_
# define MY_H_

char	*get_coding_byte(char * str);
int	convert_bin_to_dec(char *str);
char    *get_first_word(char *str);
void	my_strcat(char *dest, char *src);
void	my_strcpy(char *dest, char *src);
void	my_strncpy(char *dest, char *src, int nb);
void	my_putstr(char *str);
void	my_putchar(char c);
void	my_put_nbr(int nb);
void	my_strncat(char *dest, char *src, int nb);
int	my_strlen(char *str);
int	my_strcmp(char *str, char *str2);
char	*conv_hexa(int nb);
char	*init_tab(char *str, int len);
char	**my_str_to_wordtab(char *tab);
char	*my_evil_str(char *str);
int	my_putnbr_base_len(int nb, char *base);

#endif /* !MY_H_ */
